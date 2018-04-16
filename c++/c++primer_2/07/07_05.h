#pragma once

#include <string>

using namespace std;

class Preson
{
private:
    string pName;
    string pAddress;

public:
    string getName() const 
    { return pName; }
    string getAddress() const
    { return pAddress; }
};
