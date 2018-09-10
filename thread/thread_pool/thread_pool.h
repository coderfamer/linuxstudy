//
// Created by quan on 18-9-10.
//
#pragma  once

#include <iostream>
#include <future>
#include <vector>
#include <thread>
#include <queue>
#include <mutex>
#include <type_traits>
#include <functional>

using namespace std;

class ThreadPool
{
public:
    ThreadPool(size_t);
    template <class F, class... Args>
    auto enqueue(F &&f, Args&&... Args) -> std::future<typename std::result_of<F(Args...)>::type>;
    ~ThreadPool();
private:
    vector<thread> workers;
    queue<function<void()>> tasks;

    mutex queue_mutex;
    condition_variable condition;
    bool stop;
};

inline ThreadPool::ThreadPool(size_t threads)
{
    for (size_t i = 0; i < threads; i++)
    {
        workers.emplace_back(
                [this]
                {
                    for(;;)
                    {
                        function<void()> task;
                        {
                            unique_lock<mutex> lock(this->queue_mutex);
                            this->condition.wait(lock,
                                    [this]{
                                return this->stop || !this->tasks.empty();
                            });
                            if (this->stop && this->tasks.empty())
                                return;
                            task = move(this->tasks.front());
                            this->tasks.pop();
                        }
                        task();
                    }
                });
    }
}

template <class F, class... Args>
auto ThreadPool::enqueue(F &&f, Args &&... Args) -> future<typename result_of<F(Args...)>::type>
{
    using return_type = typename result_of<F(Args...)>::type;
    auto task = make_shared<packaged_task<return_type()>(
            std::bind(forward<F>(f), forward<Args>(args)...)
            );
}