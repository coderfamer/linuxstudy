/*************************************************************************
	> File Name: string_toupper.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 22时28分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include <ctype.h>
using namespace std;

int main()
{
    string s;
    cout << "enter your string:" << endl;
    getline(cin, s);
    //cin >> s;
    if (s.begin() != s.end())
    {
        auto i = s.begin();
        *i = toupper(*i);
    }
    cout << s << endl;

    return 0;
}
