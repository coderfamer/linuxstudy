#include "StdAfx.h"
using std::cout;
using std::cin;
using std::endl;

int exe603_fact(int val)
{
    int ret = 1;
    while (val > 1)
    {
        ret *= val--;
    }
    return ret;
}

void exe604_fact()
{
    int n = 0;
    int ret = 1;
    cout << "please enter a number: " << endl;
    cin >> n;
    while (n > 1)
    {
        ret *= n--;
    }
    cout << ret << endl;
}

void exe605_abs()
{
    int n = 0;
    cout << "please enter a number: " << endl;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << (-n) << endl;
    }
}

int exe607_called()
{
    static int m_call = 0;
    return ++m_call;
}

void exe607_static()
{
    int times = 0;
    for (int i = 0; i < 10; i++)
    {
        times = exe607_called();
    }
    cout << "exe607_called() be called " << times << " times!" << endl;
}

void exe610_point(int * m, int * n)
{
    cout << "begin change :" << *m << " " << *n << endl;
    int *temp;
    temp = m;
    m = n;
    n = temp;
    cout << "changed :" << *m << " " << *n << endl;
}