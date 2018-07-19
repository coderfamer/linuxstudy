#pragma once

#include <string>

using namespace std;

class HasPtr
{
public:
    HasPtr(const string &s = string()) : m_pstr(new string(s)), m_id(0)
    {  }
    HasPtr(const HasPtr &hp) : m_pstr(new string(*hp.m_pstr)), m_id(hp.m_id)
    {  }
    HasPtr& operator=(const HasPtr &hp);

    ~HasPtr()
    {
        delete m_pstr;
    }

private:
    string *m_pstr;
    int m_id;
};


HasPtr &HasPtr::operator=(const HasPtr &hp)
{
    auto new_pstr = new string(*hp.m_pstr);
    delete m_pstr;
    m_pstr = new_pstr;
    m_id = hp.m_id;
    return *this;
}


