#include <iostream>

using namespace std;

int test(int &a, int &b)
{
    auto f = [&]{
        return a + b;
    };

    return f();
}

int main()
{
    int a = 10;
    int b = 5;
    cout << test(a, b) << endl;

    return 0;
}