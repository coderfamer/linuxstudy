#include <iostream>

using namespace std;

void f1(int a)
{
    cout << "before: a = " << a << endl;
    a++;
}

void f2(int &b)
{
    cout << "before: b = "<< b << endl;
    b++;
}


int main()
{
    int a = 10;
    int b = 10;
    f1(a);
    cout << "after: a = " << a << endl;
    f2(b);
    cout << "after: b = " << b << endl;


    return 0;
}
