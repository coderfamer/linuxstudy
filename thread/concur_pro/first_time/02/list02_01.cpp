//
// Created by quan on 18-9-10.
//
#include <iostream>
#include <thread>

using std::thread;

void do_something(int &i)
{
    ++i;
}

struct func
{
    int &i;
    func(int &i_) : i(i_){}
    void operator()()
    {
        for (unsigned j = 0; j < 1000000000; ++j)
        {
            do_something(i);
        }
    }
};

void oops()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    thread my_thread(my_func);
    my_thread.join();//do not wait for thread to finish
    std::cout << my_thread.joinable() << std::endl;
}

int main()
{
    oops();
    return 0;
}
