#ifndef SINGLETON_H
#define SINGLETON_H
#include "global.h"

/**
 * 此单例类用作基类
 */
template <typename T>
class Singleton{
protected:
    Singleton() = default;
    Singleton(const Singleton<T>&) = delete;
    Singleton& operator = (const Singleton<T>& st) = delete;
    static std::shared_ptr<T> _instance; //只是声明，模板类初始化在.h文件下面

public:
    static std::shared_ptr<T> getInstance() {
        static std::once_flag s_flag; //保证只有第一次的时候才会初始化
        std::call_once(s_flag, [&]() {
            _instance = std::shared_ptr<T> (new T);
        });
        return _instance;
    }

    void printAddress() {
        std::cout << _instance.get() << std::endl;
    }

    ~Singleton() {
        std::cout << "this is singleton destruct" << std::endl;
    }
};

template <typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;


#endif // SINGLETON_H
