#include <iostream>

using namespace std;

int cnt = 0;
int flb(int n)
{
    cnt++;
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 2;
    }
    else
    {
        return flb(n - 1) + flb(n -2);
    }
}

int main()
{
    flb(8);
    cout << cnt << endl;



    return 0;
}
