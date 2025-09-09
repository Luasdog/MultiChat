#include "VerifyGrpcClient.h"
#include "ConfigMgr.h"

RPConPool::RPConPool(size_t poolsize, std::string host, std::string port)
	: _poolSize(poolsize)
	, _host(host)
	, _port(port)
	, _b_stop(false)
{
	for (size_t i = 0; i < _poolSize; ++i) {
		std::shared_ptr<Channel> channel = grpc::CreateChannel(host + ":" + port,
			grpc::InsecureChannelCredentials());
		_connections.push(VerifyService::NewStub(channel)); // 隐式调用移动构造
		// × 这种非法
		//auto m = VerifyService::NewStub(channel);
		//_connections.push(m);
	}
}

RPConPool::~RPConPool() {
	std::lock_guard<std::mutex> lock(_mutex);
	Close(); // 通知关闭
	while (!_connections.empty()) {
		_connections.pop();
	}
}

void RPConPool::Close() {
	_b_stop = true;
	_cond.notify_all();
}


std::unique_ptr<VerifyService::Stub> RPConPool::getConnection() { // 取回连接
	std::unique_lock<std::mutex> lock(_mutex);
	_cond.wait(lock, [this]() {
		if (_b_stop) {
			return true;
		}
		return !_connections.empty(); // 没有停止且队列为空（false） 挂起等待
		});

	if (_b_stop) {
		return nullptr;
	}
	auto context = std::move(_connections.front());
	_connections.pop();
	return context;
}

void RPConPool::returnConnection(std::unique_ptr<VerifyService::Stub> context) {
	std::lock_guard<std::mutex> lock(_mutex);
	if (_b_stop) {
		return;
	}

	_connections.push(std::move(context));
	_cond.notify_one();
}

GetVerifyRsp VerifyGrpcClient::GetVerifyCode(std::string email) {
	ClientContext context;
	GetVerifyRsp reply;
	GetVerifyReq request;
	request.set_email(email);
	// Status status = _stub->GetVerifyCode(&context, request, &reply);
	auto stub = _pool->getConnection();
	Status status = stub->GetVerifyCode(&context, request, &reply);
	if (status.ok()) {
		_pool->returnConnection(std::move(stub)); // 回收
		return reply;
	}
	else {
		_pool->returnConnection(std::move(stub)); // 回收
		reply.set_error(ErrorCodes::RPCFailed);
		return reply;
	}
}

// 显示声明构造函数
//VerifyGrpcClient() {
//	std::shared_ptr<Channel> channel = grpc::CreateChannel("127.0.0.1:50051",
//		grpc::InsecureChannelCredentials());
//	_stub = VerifyService::NewStub(channel);

//}

VerifyGrpcClient::VerifyGrpcClient() {
	auto& gCfgMgr = ConfigMgr::Inst();
	std::string host = gCfgMgr["VerifyServer"]["Host"];
	std::string port = gCfgMgr["VerifyServer"]["Port"];
	_pool.reset(new RPConPool(5, host, port));
}
