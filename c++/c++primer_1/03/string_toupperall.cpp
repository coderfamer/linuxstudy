/*************************************************************************
	> File Name: string_toupperall.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 22时37分48秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto i = s.begin(); i !=s.end() && !isspace(*i); i++ )
    {
        *i = toupper(*i);
    }
    cout << s << endl;

    return 0;
}

