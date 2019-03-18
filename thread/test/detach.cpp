#include <iostream>
#include <thread>
#include <cstdint>
using namespace std;

void output(int i)
{
    cout << i << endl;
}

int main()
{
    for (unit8_t i = 0; i < 4; i++)
    {
        thread t(output,  i);
        t.detach();
    }

    return 0;
}

