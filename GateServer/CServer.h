#pragma once
#include "const.h"

class CServer : public std::enable_shared_from_this<CServer>
{
public:
	CServer(boost::asio::io_context& ioc, unsigned short& port); //Win下主流的io模型是IOCP，Linux下是epoll
	void Start();
private:
	tcp::acceptor _acceptor;
	net::io_context& _ioc;
	// tcp::socket _socket;
};

