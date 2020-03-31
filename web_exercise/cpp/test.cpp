#include <iostream>
using namespace std;

class A
{
public:
    virtual void test() = 0;
};

class B : public A
{
public:
    void test() override;
};

int main()
{
    int b = 20;
    int d = 30;
    int const * a = &b;
    cout << *a << endl;
    a = &d;
    cout << *a << endl;

    int * const c = &b;
    cout << *c << endl;
    *c = d;
    cout << *c << endl;

    return 0;
}