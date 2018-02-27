/*************************************************************************
	> File Name: grade.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 22时01分06秒
 ************************************************************************/

#include<iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vint(11, 0);
    int grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            //++vint[grade/10];
            auto i = grade/10;
            vint[i] = vint[i] + 1;
        }else{
            return -1;
        }
    }

    for (auto i : vint)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
