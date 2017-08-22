/*查看下列程序运行结果*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char a[] = "programming", b[] = "language";

    char *p1, *p2;

    int i;

    p1 = a;
    p2 = b;
    for (i=0; i<7; i++)
    {
        if (*(p1+i) == *(p2+i))
        {
            //printf("%c", *(p1+i));
            //cout << p1 << endl;;
            //cout << i << endl;
            cout << *(p1 + i );
        }
    }
    cout << endl;

    return 0;
}
