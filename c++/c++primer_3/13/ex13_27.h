#pragma once

#include <string>

using namespace std;

class HasPtr
{
public:
    HasPtr(const string &s = string()) : m_pstr(new string(s)), m_id(0),use(new size_t(1))
    {  }
    HasPtr(const HasPtr &hp) : m_pstr(new string(*hp.m_pstr)), m_id(hp.m_id), use(hp.use)
    { ++*use; }
    HasPtr& operator=(const HasPtr &hp);

    ~HasPtr()
    {
        if (--*use == 0)
        {
            delete m_pstr;
            delete use;
        }
    }

private:
    string *m_pstr;
    int m_id;
    size_t *use;
};


HasPtr &HasPtr::operator=(const HasPtr &hp)
{
    ++*hp.use;
    if (--*use == 0)
    {
        delete m_pstr;
        delete use;
    }
    ps = hp.m_pstr;
    m_id = hp.m_id;
    use = hp.use;

    return *this;
}


