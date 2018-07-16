#pragma once
#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;
struct  Person
{
    string m_address;
    string m_name;
    string const &get_name() const
    { return m_name; }
    string const &get_address() const
    { return m_address; }

};


istream &read(istream &is, Person &per)
{
    is >> per.m_name >> per.m_address;
    return is;
}

ostream &print(ostream &os, const  Person &per) 
{
    os << per.m_name << " " << per.m_address;
    return os;
}

