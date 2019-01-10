#include "StdAfx.h"
#include "Person.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

std::istream & read(std::istream & is, Person & per)
{
    is >> per.m_name >> per.m_address;
    return is;
}

std::ostream & print(std::ostream & os, const Person &per)
{
    os << per.m_name << " " << per.m_address;
    return os;
}

Person::Person(std::istream & is)
{
    read(is, *this);
}
