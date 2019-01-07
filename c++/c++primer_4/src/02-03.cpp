#include "common.h"

int main0203()
{
    unsigned u = 10, u2 = 42;

    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;
    cout << 20e+1 << endl;
    //cout << e - 1 << endl;
    return 0;
}