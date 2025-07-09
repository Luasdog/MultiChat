#pragma once
#include "const.h"
#include "Singleton.h"

class HttpConnection; //互相声明，并在.cpp文件中包含对方的.h，解决互引用
typedef std::function<void(std::shared_ptr<HttpConnection>)> HttpHandler;

class LogicSystem : public Singleton<LogicSystem> {
	friend class Singleton<LogicSystem>;
public:
	// ~LogicSystem() {}
	bool HandleGet(std::string path, std::shared_ptr<HttpConnection> con);
	bool HandlePost(std::string path, std::shared_ptr<HttpConnection> con);
	void RegGet(std::string url, HttpHandler handler);
	void RegPost(std::string url, HttpHandler handler);
private:
	LogicSystem();
	std::map<std::string, HttpHandler> _post_handlers;
	std::map<std::string, HttpHandler> _get_handlers;
};