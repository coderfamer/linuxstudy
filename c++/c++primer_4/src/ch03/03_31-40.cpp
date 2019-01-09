#include "StdAfx.h"

using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::string;
using std::cin;

void exe335_arrto0()
{
    int arr[11];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    auto abeg = begin(arr);
    auto aend = end(arr);

    for (; abeg != aend; abeg++)
    {
        *abeg = 0;
    }

    for (auto &w : arr)
    {
        cout << w << endl;
    }
}