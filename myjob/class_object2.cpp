#include <iostream>

using namespace std;

class base;
base *pBase;

class base{
public:
    base()
    {
        pBase = this;
    }
    virtual void fn()
    {
        cout << "base " << endl;
    }
};

class derived : public base
{
    void fn()
    {
        cout << "derived" << endl;
    }
};


int main(int argc, char *argv[])
{
    derived d;
    pBase->fn();
    base b;
    pBase->fn();


    return 0;
}











