//
// Created by Administrator on 2018/10/15.
//
#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

void thread01()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Thread 01 is work" << endl;
        sleep(100);
    }
}

void thread02()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Thread 02 is working!!" << endl;
        sleep(200);
    }
}

int main()
{
    std::thread task01(thread01);
    std::thread task02(thread02);

    task01.detach();
    task02.detach();

    for (int i = 0; i < 5; i++)
    {
        cout <<"Main thread is working!" << endl;
        sleep(200);
    }
}

