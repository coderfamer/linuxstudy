/*************************************************************************
	> File Name: 3_23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 22时48分29秒
 ************************************************************************/

#include<iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> vint;
    int num;

    while (cin >> num)
    {
        vint.push_back(num);
    }

    for (auto it = vint.begin(); it != vint.end(); it++ )
    {
        *it = (*it) * 2;
    }

    for (auto i : vint)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
