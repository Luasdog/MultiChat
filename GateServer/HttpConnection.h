#pragma once
#include "const.h";

class HttpConnection : public std::enable_shared_from_this<HttpConnection>
{
	friend class LogicSystem; //互相声明，并在.cpp文件中包含对方的.h
public:
	// HttpConnection(tcp::socket socket);
	HttpConnection(boost::asio::io_context& ioc);
	void Start();
	void PreParseGetParam();
	// ioc socket 均不可被拷贝
	tcp::socket& GetSocket();
private:
	void CheckDeadline(); // 超时检测函数
	void WriteResponse();
	void HandleReq();
	tcp::socket _socket;
	beast::flat_buffer _buffer{ 8192 }; // 缓冲区
	http::request<http::dynamic_body> _request; // 请求消息
	http::response<http::dynamic_body> _response; // 响应消息
	net::steady_timer _deadline{
		_socket.get_executor(), std::chrono::seconds(60)
	}; //初始化列表

	std::string _get_url;
	std::unordered_map<std::string, std::string> _get_params;
};

