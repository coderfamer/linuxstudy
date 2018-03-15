#include <iostream>
//#include <string>
//#include <cctype>
using namespace std;

bool isUpper(const string &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if ((*it) >= 'A' && (*it) <= 'Z')
        {
            cout << "has upper!!" << endl;
            return true;
        }
    }
    cout << "no upper!!" << endl;
    return false;
}

bool isUpper2(const string &str)
{
    for (auto c : str)
    {
        if (isupper(c))
        {
            return true;
        }
    }
    return false;
}

void trans(string &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if ((*it) >= 'A' && (*it) <= 'Z')
        {
            *it += 32;
        }
        cout << *it;
    }
    cout << endl;
}

void trans2(string &str)
{
    for (auto &c : str)
    {
        c = tolower(c);
    }
}

int main()
{
    string str = "My Name Is Quan";
    cout << isUpper(str) << endl;
    trans(str);

    string str2 = "My Love Is C";
    cout << isUpper2(str2) << endl;
    trans2(str2);
    cout << str2 << endl;
    //cout << trans2(str2) << endl;
    return 0;
}
