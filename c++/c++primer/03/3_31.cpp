/*************************************************************************
	> File Name: 3_31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月23日 星期日 09时30分04秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main()
{
    int a[10];

    for (int i=0; i<10; i++)
    {
        a[i] = i;
    }
    //a[10] = "\0";
    for (auto c : a)
    {
        cout << c << " ";
    }
    cout << endl;


    return 0;
}
