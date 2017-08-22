/*************************************************************************
	> File Name: 5_23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月25日 星期二 23时41分51秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    cout << "please enter devidend and divisor:" << endl;
    int ival1, ival2;
    cin >> ival1 >> ival2;

    if (ival2 == 0)
    {
        cout << "divisor is note zero" << endl;
        return -1;
    }
    cout << "two number :" << ival1 / ival2 << endl;


    return 0;
}
