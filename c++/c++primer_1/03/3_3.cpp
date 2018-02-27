/*************************************************************************
	> File Name: 3_3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 23时56分15秒
 ************************************************************************/
/*
 * string的输入运算符发自动忽略字符开头的空白，如果希望读入输入时的空白字符，应该使用geline函数代替原来的>>运算符
* */
#include<iostream>
#include <string>
#include <stdio.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string word;

    cout << "please chose how to read string:" << endl;
    cout << "1 read words" << endl;
    cout << "2 read all line" << endl;
    char ch;
    cin >> ch;
    /*if (ch == '1')
    {
        cout << "enter string: " << endl;
        cin >> word;
        cout << "system read the string is:" << endl;
        cout << word << endl;
        return 0;
    }*/
    //flush
    //cin.clear();
    //cin.sync();
    //fflush(stdin);
    if (ch == '2')
    {
        string line;
        cout << "enter string:";
        getline(cin, line);
        cout << "system read the string is:" << endl;
        cout << line << endl;
        return 0;
    }
    cout << "your input is incorrect!!!" << endl;
    return -1;

}

