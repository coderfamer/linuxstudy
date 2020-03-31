#include <iostream>
#include <chrono>
#include <thread>




using namespace std;


struct Foo
{
    char a[2];
    long c;
    int b;
};

int main()
{
    char m[3];
    cout << sizeof(struct Foo) << endl;

    cout << sizeof(long) << endl;
    cout << "int:" << sizeof(int) << endl;
    cout << sizeof(double) << endl;

    cout <<sizeof(m) << endl;

    return 0;
}