#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main(int argc, char**argv)
{
    string a[10] = {"ds","das","123","123","123","123","123","123","123","123"};
    list<string> list1(a,a+10);
    string value = "123";
    cout<<"字符串“"<<value<<"”出现的次数为："<<count(list1.begin(),list1.end(),value)<<endl;

    return 0;
}
