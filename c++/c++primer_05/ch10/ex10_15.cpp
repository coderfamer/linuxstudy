#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 10;

    auto f = [a](int b) {
        return a + b;
    };

    cout << f(12) << endl;

    return 0;
}