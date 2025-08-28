#pragma once
#include <vector>
#include <boost/asio.hpp>
#include "Singleton.h"

class AsioIOServicePool : public Singleton<AsioIOServicePool>
{
	friend Singleton<AsioIOServicePool>;
public:
	using IOService = boost::asio::io_context;
	// using Work = boost::asio::io_context::work;
	// using WorkPtr = std::unique_ptr<Work>;
	// �°�boost������work ʹ��executor_work_guard
	using WorkGuard = boost::asio::executor_work_guard<IOService::executor_type>;
	using WorkGuardPtr = std::unique_ptr<WorkGuard>;
	~AsioIOServicePool();
	AsioIOServicePool(const AsioIOServicePool&) = delete;
	AsioIOServicePool& operator=(const AsioIOServicePool&) = delete;
	// ʹ�� round-robin ��ʽ����һ�� io_seivice
	IOService& GetIOService();
	void Stop();
private:
	AsioIOServicePool(std::size_t size = std::thread::hardware_concurrency()); // �����๹�캯��˽�У�Ĭ�Ͽ�2���߳�
	std::vector<IOService> _ioServices;
	std::vector<WorkGuardPtr> _works;
	std::vector<std::thread> _threads;
	std::size_t _nextIOService; // ��һ��IOSerivce������
};

