/*************************************************************************
	> File Name: 3_32.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月23日 星期日 09时59分32秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    const unsigned int sz = 10;
    int a[sz];
    for (int i=0; i<sz; i++)
    {
        a[i] = i;
    }

    int b[sz];
    for (int j=0; j< sz; j++)
    {
        b[j] = a[j];
    }

    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
    
}
