#pragma once
#include "const.h";

class HttpConnection : public std::enable_shared_from_this<HttpConnection>
{
	friend class LogicSystem; //��������������.cpp�ļ��а����Է���.h
public:
	// HttpConnection(tcp::socket socket);
	HttpConnection(boost::asio::io_context& ioc);
	void Start();
	void PreParseGetParam();
	// ioc socket �����ɱ�����
	tcp::socket& GetSocket();
private:
	void CheckDeadline(); // ��ʱ��⺯��
	void WriteResponse();
	void HandleReq();
	tcp::socket _socket;
	beast::flat_buffer _buffer{ 8192 }; // ������
	http::request<http::dynamic_body> _request; // ������Ϣ
	http::response<http::dynamic_body> _response; // ��Ӧ��Ϣ
	net::steady_timer _deadline{
		_socket.get_executor(), std::chrono::seconds(60)
	}; //��ʼ���б�

	std::string _get_url;
	std::unordered_map<std::string, std::string> _get_params;
};

