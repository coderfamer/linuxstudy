#include <iostream>

using namespace std;

int fnc(int x)
{
    int countx = x;
    while (countx)
    {
        countx++;
        x = x&(x-1);
    }
    return countx;
}

int main()
{
    int x = 9999;
    cout << fnc(x) << endl;
    return 0;
}
