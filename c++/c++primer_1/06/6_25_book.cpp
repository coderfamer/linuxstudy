/*************************************************************************
	> File Name: 6_25_book.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月26日 星期三 20时36分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string str;

    for (int i=1; i<argc; i++)
    {
        str += argv[i];
    }
    cout << str <<endl;


    return 0;
}
