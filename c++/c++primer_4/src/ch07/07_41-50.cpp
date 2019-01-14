#include "StdAfx.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

void exe_741_constractor()
{
    cout << "-------------------meiyou canshu------------------ " << endl;
    Sales_data data1;
    cout << "-------------------yige canshu------------------ " << endl;
    Sales_data data2("hello");
    cout << "-------------------sange canshu------------------ " << endl;
    Sales_data data3("hello", 20, 20);
    cout << "-------------------is canshu------------------ " << endl;
    Sales_data data4(cin);
}