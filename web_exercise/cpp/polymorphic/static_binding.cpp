#include <iostream>
using std::cout;
using std::endl;

class A
{
public:
    void func() { cout << "A::func()" << endl; }
};

class B : public A
{
public:
    void func() { cout << "B::func()" << endl; }
};

class C : public A
{
public:
    //void func() { cout << "C::func() " << endl; }
};

int main()
{
    C * pc = new C();
    pc->func();
    B * pb = new B();
    pb->func();
    A * pa = pc;//pa的静态类型永远都是A*，不管其指向的是哪个子类，都是直接调用调用自身
    pa->func();
    pa = pb;
    pa->func();
    C * pnull = nullptr;
    pnull->func();

    return 0;
}