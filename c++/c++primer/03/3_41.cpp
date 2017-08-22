/*************************************************************************
	> File Name: 3_41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月23日 星期日 22时31分22秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int a[10];
    for (int i=0; i<10; i++)
    {
        a[i] = i;
    }
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> vecint(begin(a), end(a));
    for (auto it : vecint)
    {
        cout << it << " ";
    }
    cout << endl;


    return 0;
}
