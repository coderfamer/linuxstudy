#pragma once

#include <string>

using namespace std;

class HasPtr
{
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0)
    {  }
    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i)
    {  }
    HasPtr& operator=(const HasPtr &rhs_hp)
    {
        if (this != &rhs_hp)
        {
            string *temp_ps = new string(*rhs_hp.ps);
            delete ps;
            ps = temp_ps;
            i = rhs_hp.i;
        }
        return *this;
    }
private:
    string *ps;
    int i;
};
