#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char a[100] = {'h', 'e', 'l', 'o'};
    char b[100] = {'w', 'o', 'r', 'l', 'd'};
    char c[200] = {};
    strcpy(c, a);
    strcat(c, " ");
    strcat(c, b);
    cout << c << endl;
    cout << -4 + -18 << endl;
    int i = 0, j;
    j = ++i;
    cout << i << j << endl;
    j = i++;
    cout << i << j << endl;
    if (j == i++)
    {
        cout << i << j << endl;
    }
    cout << i << j << endl;

    return 0;
}
