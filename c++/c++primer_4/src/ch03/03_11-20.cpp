#include "StdAfx.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;

void exe320_vectorcount1()
{
    int n = 0;
    vector<int> nvec;
    while (cin >> n)
    {
        nvec.push_back(n);
    }

    //auto iter = nvec.begin();
    for (size_t i = 0; i < nvec.size(); i++)
    {
        if (i + 1 >= nvec.size())
        {
            cout << nvec[i] << endl;
        }
        else
        {
            cout << nvec[i] + nvec[i++] << endl;
        }
    }
}

void exe320_vectorcount2()
{
    int n = 0;
    vector<int> nvec;
    while (cin >> n)
    {
        nvec.push_back(n);
    }

    size_t size = nvec.size();
    for (size_t i = 0, j = size-1; i <= j; i++, j--)
    {
        if (i == j)
        {
            cout << nvec[i] << endl;
        }
        else
        {
            cout << nvec[i] + nvec[j] << endl;
        }
    }
}