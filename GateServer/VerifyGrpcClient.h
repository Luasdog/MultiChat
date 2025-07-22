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
	RPConPool(size_t poolsize, std::string host, std::string port);
	~RPConPool();
	void Close();
	std::unique_ptr<VerifyService::Stub> getConnection(); // 取回连接
	void returnConnection(std::unique_ptr<VerifyService::Stub> context);
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
	GetVerifyRsp GetVerifyCode(std::string email);
private:
	VerifyGrpcClient();
	//std::unique_ptr<VerifyService::Stub> _stub;
	std::unique_ptr<RPConPool> _pool;
};

