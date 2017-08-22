#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[7] = "abcdef";
    char b[4] = "ABC";
    //strcpy会将'\0'也拷贝进去
    strcpy(a, b);
    cout << a[5] << endl;

    for (auto i : a)
    {
        cout << i << " |";
    }
    cout << endl;



    return 0;
}
