#include "StdAfx.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

void exe305_out_strings()
{
    string word;
    string strings;
    while (cin >> word)
    {
        if (!word.empty())
        {
            strings += word;
        }
    }
    cout << strings << endl;
}

void exe305_out_string()
{
    string word;
    while (cin >> word)
    {
        if (!word.empty())
        {
            cout << word << " ";
        }
    }
    cout << endl;
}