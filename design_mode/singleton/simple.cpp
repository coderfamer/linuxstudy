#include <iostream>
#include <string>

using namespace std;

class LocalStaticInstanceInt
{
public:
    static LocalStaticInstanceInt &instance()
    {
        static LocalStaticInstanceInt instance;
        return instance;
    }
    virtual ~LocalStaticInstanceInt()
    {
        cout << "destory LocalStaticInstanceInt" << endl;
    }

    int getValue() const { return value; }
    void setValue(int val) { value = val; }
private:
    LocalStaticInstanceInt() : value(0)
    {
        cout << "create LocalStaticInstanceInt" << endl;
    }
    LocalStaticInstanceInt(const LocalStaticInstanceInt&) {}
    LocalStaticInstanceInt &operator=(const LocalStaticInstanceInt &)
    { return *this; }
private:
    int value;
};

class LazyInstance
{
public:
    static LazyInstance *instance()
    {
        static LazyInstance *ins = new LazyInstance();
        return ins;
    }

    virtual ~LazyInstance()
    {
        cout << "destory LazyInstance" << endl;
    }

    int getValue() const { return value; }
    void setValue(int val) { value = val; }

private:
    LazyInstance() : value(0)
    {
        cout << "create LazyInstance" << endl;
    }
    LazyInstance(const LazyInstance&) {}
    LazyInstance &operator=(const LazyInstance &) 
    { return *this; }

    int value;
};

void destoryInstance()
{
    LazyInstance *si = LazyInstance::instance();
    if (si)
    {
        delete si;
    }
}

int main()
{
    {
        LocalStaticInstanceInt &lsi1 = LocalStaticInstanceInt::instance();
        LocalStaticInstanceInt &lsi2 = LocalStaticInstanceInt::instance();
        cout << "ins1.value = " << lsi1.getValue() << " ins2.value" << lsi2.getValue() << endl;
        lsi1.setValue(5);
        cout << "ins1.value = " << lsi1.getValue() << " ins2.value" << lsi2.getValue() << endl;
    }
    {
        LazyInstance *si1 = LazyInstance::instance();
        LazyInstance *si2 = LazyInstance::instance();
        cout << "si1.value = " << si1->getValue() << " si2.value = " << si2->getValue() << endl;
        si1->setValue(5);
        cout << "si1.value = " << si1->getValue() << " si2.value = " << si2->getValue() << endl;
    }
    
    atexit(destoryInstance);

    return 0;
}
