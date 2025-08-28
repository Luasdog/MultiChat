#include "AsioIOServicePool.h"
#include <iostream>
using namespace std;

AsioIOServicePool::AsioIOServicePool(std::size_t size)
	: _ioServices(size)
	, _works(size)
	, _nextIOService(0) {
	for (std::size_t i = 0; i < size; i++) {
		// _works[i] = std::unique_ptr<Work>(new Work(&_ioServices[i]));
		_works[i] = std::make_unique<WorkGuard>(boost::asio::make_work_guard(_ioServices[i])); // 与ioservice绑定 保证run不会退出
	}

	// 遍历索格ioservice，创建多个线程，每个线程内部启动ioservice
	for (std::size_t i = 0; i < _ioServices.size(); i++) {
		_threads.emplace_back([this, i]() {
			_ioServices[i].run();
			});
	}
}

AsioIOServicePool::~AsioIOServicePool() {
	Stop();
	std::cout << "AsioIOServicePool destruct" << std::endl;
}

boost::asio::io_context& AsioIOServicePool::GetIOService() {
	auto& service = _ioServices[_nextIOService++];
	if (_nextIOService == _ioServices.size()) {
		_nextIOService = 0;
	}
	return service;
}

void AsioIOServicePool::Stop() {
	// 先取消所有 work_guard ，让 io_context 能自动退出run()
	for (auto& work : _works) {
		// 把服务先停止
		// work->get_io_context().stop();
		// work.reset();
		work->reset(); // 新写法，释放 keep-alive
	}

	// 确保 io_context 自己也 stop 掉（防止有其他阻塞任务）
	for (auto& io : _ioServices) {
		io.stop();
	}

	for (auto& t : _threads) {
		if (t.joinable()) {
			t.join();
		}
	}
}