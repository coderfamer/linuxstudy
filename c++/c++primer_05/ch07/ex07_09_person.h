#ifndef _EX07_09_PERSON_H_
#define _EX07_09_PERSON_H_

#include <iostream>
#include <string>

struct Person
{
    const std::string& get_name() const { return m_name; }
    const std::string& get_address() const { return m_address; }

    std::string m_name;
    std::string m_address;
};

std::istream &read(std::istream &is, Person &person) {
    is >> person.m_name >> person.m_address;
    return is;
}

std::ostream &print(std::ostream &os, Person &person) 
{
    os << person.m_name << " " << person.m_address;
    return os;
}

#endif