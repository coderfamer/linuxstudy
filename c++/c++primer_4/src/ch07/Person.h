#pragma once
#include "StdAfx.h"

class Person
{
    friend std::istream &read(std::istream &is, Person &per);
    friend std::ostream &print(std::ostream &os, const Person &per);
public:
    Person() = default;
    Person(const string &name) : m_name(name) { }
    Person(const string &name, const string &address) 
        : m_name(name), m_address(address) { }

    Person(std::istream & is);
public:
    std::string get_name() const { return m_name; }
    std::string get_address() const { return m_address; }
private:
    std::string m_name;
    std::string m_address;
};

std::istream &read(std::istream &is, Person &per);
std::ostream &print(std::ostream &os, const Person &per);