#ifndef _EX07_09_PERSON_H_
#define _EX07_09_PERSON_H_

#include <iostream>
#include <string>

class Person;
std::istream &read(std::istream &is, Person &person);
std::ostream &print(std::ostream &os, Person &person);

class Person
{
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, Person &person);
public:
    Person() = default;
    Person(std::string name, std::string address) :
            m_name(name), m_address(address) {}
    Person(std::istream &is);
    const std::string& get_name() const { return m_name; }
    const std::string& get_address() const { return m_address; }

private:
    std::string m_name;
    std::string m_address;
};

Person::Person(std::istream &is)
{
    read(is, *this);
}

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