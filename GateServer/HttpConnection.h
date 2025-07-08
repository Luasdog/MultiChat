#pragma once
#include "const.h";

class HttpConnection : public std::enable_shared_from_this<HttpConnection>
{
public:
	friend class LogicSystem; //互相声明，并在.cpp文件中包含对方的.h
	HttpConnection(tcp::socket socket);
	void Start();
private:
	void CheckDeadline(); // 超时检测函数
	void WriteResponse();
	void HandleReq();
	tcp::socket _socket;
	beast::flat_buffer _buffer{ 8192 };
	http::request<http::dynamic_body> _request;
	http::response<http::dynamic_body> _response;
	net::steady_timer _deadline{
		_socket.get_executor(), std::chrono::seconds(60)
	}; //初始化列表
};

