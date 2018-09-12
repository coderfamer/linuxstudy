//
// Created by quan on 18-9-11.
//
#include <iostream>
#include <thread>

using namespace std;

class thread_gard
{
    thread &t;
public:
    explicit thread_gard(thread &t_) : t(t_) {}
    ~thread_gard()
    {
        if (t.joinable())
            t.join();
    }
    thread_gard(const thread_gard &) = delete;
    thread_gard &operator=(const thread_gard &) = delete;
};

void do_something(int &i)
{
    ++i;
}

struct func
{
    int &i;
    func(int &i_) : i(i_) {}

    void operator()()
    {
        for (unsigned j = 0; j < 1000000; j++)
        {
            do_something(i);
        }
    }
};

void do_something_in_current_thread()
{

}

void f ()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    thread t(my_func);
    thread_gard g(t);

    do_something_in_current_thread();
}

int main()
{
    f();
    return 0;
}