#include <iostream>

using namespace std;
class A{
public:
    virtual void print()
    {
        cout << "A.print()" << endl;
    }
};

class B : public A
{
public:
    virtual void print()
    {
        cout << "B.print()" << endl;
    }
};

void print(A a)
{
    a.print();
}

int main()
{
    A a, *pa, *pb;
    B b;

    pa = &a;
    pb = &b;
    a.print();
    b.print();
    pa->print();
    pb->print();
    print(a);
    print(b);

    return 0;
}
















