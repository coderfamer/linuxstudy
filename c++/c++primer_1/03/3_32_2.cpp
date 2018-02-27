/*************************************************************************
	> File Name: 3_32_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月23日 星期日 10时02分10秒
 ************************************************************************/

#include<iostream>
#include <vector>

using namespace std;


int main()
{
    const int sz  = 10;
    vector<int> vInt, vInt2;

    for (int i=0; i<sz; i++)
    {
        vInt.push_back(i);
    }

    for (int j=0; j<sz; j++)
    {
        vInt2.push_back(vInt[j]);
    }

    for (auto it : vInt2)
    {
        cout << it << " ";
    }
    cout << endl;
    

    return 0;
}
