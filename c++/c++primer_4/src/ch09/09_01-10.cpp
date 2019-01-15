#include "StdAfx.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool exe90405_find(const vector<int> &vInt, int findValue)
{
    auto vbegin = vInt.begin();
    auto vend = vInt.end();
    for (; vbegin != vend; vbegin++)
    {
        if (*vbegin == findValue)
        {
            return true;
        }
    }
    return false;
}

void exe904_vector()
{
    vector<int> vInt;
    for (int i = 0; i < 20; i++)
    {
        vInt.push_back(i);
    }

    bool bfind1 = exe90405_find(vInt, 10);
    if (bfind1)
    {
        cout << "find value1" << endl;
    }
    else
    {
        cout << "can't find value1" << endl;
    }
    
    bool bfind2 = exe90405_find(vInt, 30);
    if (bfind2)
    {
        cout << "find value2" << endl;
    }
    else
    {
        cout << "can't find value2" << endl;
    }
}

void test_at()
{
    vector<int> a;
    cout << a.at(0) << endl;
}