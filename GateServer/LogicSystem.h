#pragma once
#include "const.h"
#include "Singleton.h"

class HttpConnection; //��������������.cpp�ļ��а����Է���.h�����������
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