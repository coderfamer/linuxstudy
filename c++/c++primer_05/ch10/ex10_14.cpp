#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 10, b = 15;
    int sum = 0;

    auto f = [](int a, int b) {
        return a + b;
    };

    
    cout << f(a, b) << endl;

    return 0;
}