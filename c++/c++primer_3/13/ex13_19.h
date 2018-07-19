#pragma once

#include <string>

using namespace std;

class Employee
{
    Employee()
    {
        m_id = unique++;
    }
    Employee(const string &name) : m_name(name)
    {
        m_id = unique++;
    }
    Employee(const Employee&) = delete;
    Employee &operator=(const Employee&) = delete;

private:
    string m_name;
    int m_id;
    static int unique;

};

int Employee::unique = 10000;


