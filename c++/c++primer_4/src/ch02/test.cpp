#include "common.h"

int f(int x,  int y)
{
    return 0;
}

int main()
{
    decltype(f(1, 1)) a = 10;
   
    cout << a << endl;

    const int ci = 0, &cj = ci;

    decltype(ci) x = 0;
    decltype(cj) y = x;
    string str = "quan";
    string s = "hello" + ("world" + str);
    cout << s << endl;



    return 0;
}