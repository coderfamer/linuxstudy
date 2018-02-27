#include <iostream>
#include <string>

using std::string;
using std::istream;

class Person
{
public:
    string get_name() const
    {
        return m_name;
    }
    string get_addr() const
    {
        return m_addr;
    }
    const string return_addr(string addr);
private:
    Person() = deafult;
    Person(string &name, string &addr):name(m_name),addr(m_addr)
    {}
    Person(istream &is)
    {
        is >> *this;
    }

    string m_name;
    string m_addr;

};
