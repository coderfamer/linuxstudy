#include <iostream>
#include <string>

class Base
{
public:
    void pub_men();
protected:
    int port_mem;
private:
    char priv_men;
};

struct Pub_Derv : public Base
{
    void memfcn(Base &b)
    { b = *this; }
};

struct Priv_Derv : private Base
{
    void memfcn(Base &b)
    { b = *this; }
};

struct Prot_Derv : protected Base
{
    void memfcn(Base &b)
    { b = *this; }
};

struct Derived_from_Public : public Pub_Derv
{
    void memfcn(Base &b)
    { b = *this; }
};

struct Derived_from_Private : public Priv_Derv
{
    void memfcn(Base &b)
    {
        b = *this;
    }
};

struct Derived_from_Protected : public Prot_Derv
{
    void memfcn(Base &b)
    { b = *this; }
};


