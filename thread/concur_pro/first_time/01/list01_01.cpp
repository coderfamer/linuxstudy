//
// Created by quan on 18-9-10.
//

#include <iostream>
#include <thread>

void hello()
{
    std::cout << "Hello Concurrent World\n";
}

int main()
{
    std::thread t(hello);
    t.join();

    return 0;
}

