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
	// 新版boost库中无work 使用executor_work_guard
	using WorkGuard = boost::asio::executor_work_guard<IOService::executor_type>;
	using WorkGuardPtr = std::unique_ptr<WorkGuard>;
	~AsioIOServicePool();
	AsioIOServicePool(const AsioIOServicePool&) = delete;
	AsioIOServicePool& operator=(const AsioIOServicePool&) = delete;
	// 使用 round-robin 方式返回一个 io_seivice
	IOService& GetIOService();
	void Stop();
private:
	AsioIOServicePool(std::size_t size = std::thread::hardware_concurrency()); // 单例类构造函数私有，默认开2个线程
	std::vector<IOService> _ioServices;
	std::vector<WorkGuardPtr> _works;
	std::vector<std::thread> _threads;
	std::size_t _nextIOService; // 下一个IOSerivce的索引
};

