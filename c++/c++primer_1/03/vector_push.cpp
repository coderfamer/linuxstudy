/*************************************************************************
	> File Name: vector_push.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 18时52分34秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec;
    for (int i=0; i<100; i++)
    {
        vec.push_back(i);
    }
    for (auto i=vec.begin(); i!= vec.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;
    

    return 0;
}
