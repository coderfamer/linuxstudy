/*************************************************************************
	> File Name: 6_25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月26日 星期三 20时26分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string str1, str2;
    cin >> argv[1] >> argv[2];

    if (argc != 3)
    {
        cout << "error" << endl;
        return -1;
    }
    str1 = argv[1];
    str2 = argv[2];

    string str3;
    str3 = str1 + str2;
    cout << str3 << endl;


    return 0;
}
