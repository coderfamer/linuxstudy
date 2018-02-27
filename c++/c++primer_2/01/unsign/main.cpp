#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned a = 10;
    int b = -42;
    unsigned int c = b;
    cout << "b + b: " << b+b << endl;
    cout << "a + b: " << a+b << endl;
    cout << "b:" << c << endl;

    unsigned e = 42, f = 10;
    cout << "e-f: " << e-f << endl;
    cout << "f-e: " << f-e << endl;
    return 0;
}
