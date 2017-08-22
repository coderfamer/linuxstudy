#include <iostream>

using namespace std;
int func()
{
    int i,j,k=0;
    for (i=0,j=0;j==2; i++,j++)
    {
        k++;
    }

    return k;
}

int main()
{
    cout << (func()) << endl;
    return 0;
}
