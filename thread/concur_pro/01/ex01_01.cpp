#include <iostream>
#include <thread>

using namespace std;

void hello()
{
    cout << "Hello concurrent World!!!" << endl;
}


int main()
{
    thread t(hello);
    t.join();
    return 0;
}
