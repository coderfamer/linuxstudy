//
// Created by quan on 18-9-10.
//
#include <iostream>
#include <thread>

using namespace std;

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
        for (unsigned j = 0; j < 10000000; ++j)
        {
            do_something(i);
        }
    }
};

void do_something_in_current_thread()
{}

void f()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    thread t(my_func);
    try{
        do_something_in_current_thread();
    }
    catch (...)
    {
        t.join();
        throw ;
    }
    t.join();
}

int main()
{
    f();

    return 0;
}

