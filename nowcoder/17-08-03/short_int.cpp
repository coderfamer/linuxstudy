/*函数中两个for各执行了多少次*/
#include <iostream>

using namespace std;

int main()
{
    //unsigned short i, j;
    int x, y;
    for (unsigned short i=0, j=2; i != j; i+=5,j+=7)
    {
        x++;
    }
    cout << x << endl;

    for (unsigned short i=3,j=7; i!=j; i+=3,j+=7)
    {
        y++;
    }
    cout << y << endl;
    return 0;
}
