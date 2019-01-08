#include "StdAfx.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

void exe304_value()
{
    string str1, str2;
    cin >> str1 >> str2;
    string str3 = (str1 > str2) ? str1 : str2;
    cout << str3 << endl;
}

void exe304_size()
{
    string str1, str2;
    cin >> str1 >> str2;
    string str3 = (str1.size() > str2.size()) ? str1 : str2;
    cout << str3 << endl;
}