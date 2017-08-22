/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月06日 星期日 22时26分31秒
 ************************************************************************/

#include<iostream>
using namespace std;

void test(int arr[]);

int main()
{
    int a[] = {1, 2, 3};
    cout << sizeof(a)/sizeof(a[0]) << endl;

    int n = sizeof(a)/sizeof(a[0]);
    cout << n << endl;
    
    test(a);

    return 0;
}

void test(int arr[])
{
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << sizeof(arr) << endl;
    cout << n << endl;
}
