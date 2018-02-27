#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
    cout << "ival = " << ival << endl;
    cout << "*pi = " << *pi << endl;
    cout << "**pi = " << **ppi << endl;

    int i = 42;
    cout << "i = " << i << endl;
    int *p;
    int *&r = p;
    r = &i;
    *r = 0;
    cout << "i = " << i << endl;

    int a = 20;
    const int b = a;
    int c = a;
    cout << "a = " << a
         << "b = " << b
         << "c = " << c << endl;
    a = 30;
    cout << "a = " << a
         << "b = " << b
         << "c = " << c << endl;
    return 0;
}
