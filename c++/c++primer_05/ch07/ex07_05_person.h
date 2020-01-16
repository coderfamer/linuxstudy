#ifndef _EX07_04_PERSON_H_
#define _EX07_04_PERSON_H_

#include <iostream>
#include <string>

struct Person
{
    const std::string& get_name() const { return m_name; }
    const std::string& get_address() const { return m_address; }

    std::string m_name;
    std::string m_address;
};

#endif