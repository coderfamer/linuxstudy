#include "StdAfx.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

void exe302_line()
{
    string line;
    string word;
    while (getline(cin, line))
    {
        if (!line.empty())
        {
            cout << line << endl;
        }
    }
}

void exe302_word()
{
    string line;
    string word;
    while (cin >> word)
    {
        if (!word.empty())
        {
            cout << word << endl;
        }
    }
}