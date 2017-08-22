/*************************************************************************
	> File Name: 6_30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月27日 星期四 16时09分43秒
 ************************************************************************/

#include<iostream>
using namespace std;

bool str_subrange(const string & str1, const string &str2)
{
    if (str1.size() == str2.size())
    {
        return str1 == str2;
    }

    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

    for (decltype(size) i = 0; i!= size; ++i)
    {
        if (str1[i] != str2[i])
        {
            return;
        }
    }
}


int main()
{
    string str1 = "hello";
    string str2 = "world";
    bool flag;
    flag = str_subrange(str1, str2);


    return 0;
}
