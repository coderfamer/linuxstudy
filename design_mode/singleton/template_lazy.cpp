#include <iostream>
#include <string>
#include <cassert>

using namespace std;

template <class T>
class Destroyer
{
    T* doomed;
public:
    Destroyer(T* q) : doomed(q)
    {
        assert(doomed);
    }
    ~Destroyer();
};

template <class T>
Destroyer<T>::~Destroyer()
{
    try
    {
        if (doomed)
        {
            delete doomed;
        }
    }
    catch (...)
    {}
    doomed = 0;
}

class LazyInstance
{
public:
    static LazyInstance *instance()
    {
        static LazyInstance *ins = new LazyInstance();
        static Destroyer<LazyInstance> destory(ins);
        return ins;
    }

    virtual ~LazyInstance()
    {
        cout << "destory LazyInstance" << endl;
    }

    int getValue() const { return value; }
    int setValue(int val) { value = val; }

private:
    LazyInstance() : value(0)
    {
        cout << "create LazyInstance" << endl;
    }

    LazyInstance(const LazyInstance&) {}
    LazyInstance &operator=(const LazyInstance&)
    { return *this; }

    int value;
};

int main()
{
    LazyInstance *si1 = LazyInstance::instance();
    LazyInstance *si2 = LazyInstance::instance();

    cout << si1->getValue() << "  " << si1->getValue() << endl;
    si1->setValue(5);
    cout << si1->getValue() << "  " << si1->getValue() << endl;
}