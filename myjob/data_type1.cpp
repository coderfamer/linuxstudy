#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char str[] = "Word";
    char *p = str;
    char i = 10;
    void *pp = malloc(10);

    cout << "str: " << sizeof(str) << endl;
    cout << "p:" << sizeof(p) << endl;
    cout << "i: " << sizeof(i) << endl;
    cout << "pp: " << sizeof(pp) << endl;


    return 0;
}
