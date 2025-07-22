#pragma once
#include <grpcpp/grpcpp.h>
#include "message.grpc.pb.h"
#include "const.h"
#include "Singleton.h"

using grpc::Channel;
using grpc::Status;
using grpc::ClientContext;

using message::GetVerifyReq;
using message::GetVerifyRsp;
using message::VerifyService;

class RPConPool {
public:
	RPConPool(size_t poolsize, std::string host, std::string port)
		: _poolSize(poolsize)
		, _host(host)
		, _port(port)
		, _b_stop(false)
	{
		for (size_t i = 0; i < _poolSize; i++) {
			std::shared_ptr<Channel> channel = grpc::CreateChannel(host + ":" + port,
				grpc::InsecureChannelCredentials());
			_connections.push(VerifyService::NewStub(channel)); // 隐式调用移动构造
			// × 这种非法
			//auto m = VerifyService::NewStub(channel);
			//_connections.push(m);
		}
	}
	~RPConPool() {
		std::lock_guard<std::mutex> lock(_mutex);
		Close(); // 通知关闭
		while (!_connections.empty()) {
			_connections.pop();
		}
	}
	void Close() {
		_b_stop = true;
		_cond.notify_all();
	}
	std::unique_ptr<VerifyService::Stub> getConnection() { // 取回连接
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
	void returnConnection(std::unique_ptr<VerifyService::Stub> context) {
		std::lock_guard<std::mutex> lock(_mutex);
		if (_b_stop) {
			return;
		}

		_connections.push(std::move(context));
		_cond.notify_one();
	}
private:
	std::atomic<bool> _b_stop;
	size_t _poolSize;
	std::string _host;
	std::string _port;
	std::queue<std::unique_ptr<VerifyService::Stub>> _connections;
	std::condition_variable _cond;
	std::mutex _mutex;
};

class VerifyGrpcClient : public Singleton<VerifyGrpcClient>
{
	friend class Singleton<VerifyGrpcClient>;
public:
	GetVerifyRsp GetVerifyCode(std::string email) {
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

private:
	// 显示声明构造函数
	//VerifyGrpcClient() {
	//	std::shared_ptr<Channel> channel = grpc::CreateChannel("127.0.0.1:50051",
	//		grpc::InsecureChannelCredentials());
	//	_stub = VerifyService::NewStub(channel);

	//}
	VerifyGrpcClient();
	//std::unique_ptr<VerifyService::Stub> _stub;
	std::unique_ptr<RPConPool> _pool;
};

