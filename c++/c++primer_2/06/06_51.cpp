#include <iostream>

using  namespace std;

void f()
{
    cout << "the function no arguments!!" << endl;
}

void f(int)
{
    cout << "the function has one int argument!!" << endl;
}

void f(int, int)
{
    cout << "the function has two int arguments!!" << endl;
}

void f(double a, double b = 3.14)
{
    cout << "the function hai two double arguments!!" << endl;
}

int main()
{
    //f(2.56, 43);
    f(43);
    f(42, 0);
    f(2.56, 3.14);


    return 0;
}
