/*************************************************************************
	> File Name: 3_39.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月23日 星期日 22时22分46秒
 ************************************************************************/

#include<iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    cout << "please ente two string" << endl;
    cin >> str1 >> str2;
    if (str1 > str2)
    {
        cout << str1 << "  "<< str2 << "str1 > str2" << endl;
    }
    else if (str1 < str2)
    {
        cout << str1 << " " << str2 << "str1 < str2" << endl;
    }else
    {
        cout << "equal" << endl;
    }

    return 0;
}
