#include "VerifyGrpcClient.h"
#include "ConfigMgr.h"

VerifyGrpcClient::VerifyGrpcClient() {
	auto& gCfgMgr = ConfigMgr::Inst();
	std::string host = gCfgMgr["VerifyServer"]["Host"];
	std::string port = gCfgMgr["VerifyServer"]["Port"];
	_pool.reset(new RPConPool(5, host, port));
}
