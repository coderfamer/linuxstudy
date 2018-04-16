#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string pName;
    string pAddress;

public:
    Person() = default;
    Person(const string &name, const string &add)
    {
        pName = name;
        pAddress = add;
    }
    Person(std::istream &is);

    string getName() const 
    { return pName; }
    string getAddress() const
    { return pAddress; }

public:
    friend istream& operator >> (istream &, Person &);
    friend istream &read(istream &, Person &);
    friend ostream &print(ostream &, Person &);

};


istream &read(istream &is, Person &per)
{
    is >> per.pName >> per.pAddress;
    return is;
}

ostream &print(ostream &os, Person &per)
{
    os << per.getName() << per.getAddress();
    return os;
}

istream &operator >> (istream &is, Person &per)
{
    is >> per.pName >> per.pAddress;
    return is;
}

Person::Person(istream &is)
{
    is >> *this;
}
