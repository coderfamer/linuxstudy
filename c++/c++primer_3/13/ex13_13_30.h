#pragma once

#include <string>
#include <iostream>

using namespace std;

class HasPtr
{
public:
    friend void swap(HasPtr &, HasPtr &);
    HasPtr(const string &s = string()) : m_ps(new string(s)), m_id(0)
    {  }
    HasPtr(const HasPtr &hp) : m_ps(new string(*hp.m_ps)), m_id(hp.m_id)
    {  }
    HasPtr& operator=(const HasPtr &hp)
    {
        auto new_ps = new string(*hp.m_ps);
        delete m_ps;
        m_ps = new_ps;
        m_id = hp.m_id;
        return *this;
    }

    ~HasPtr()
    {
        delete m_ps;
    }
private:
    string *m_ps;
    int m_id;
};


inline
void swap(HasPtr &lhs, HasPtr &rhs)
{
    swap(lhs.m_ps, rhs.m_ps);
    swap(lhs.m_id, rhs.m_id);
    cout << "call swap(HasPtr &lhs, HasPtr &rhs)" << endl;
}
