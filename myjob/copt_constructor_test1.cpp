/*
拷贝构造函数调用次数
*/

#include <iostream>

using namespace std;

class MyClass{
public:
    MyClass(int n)
    {
        number = n;
    }
    MyClass(MyClass &other)
    {
        number = other.number;
        cout << "copy constructor called" << endl;
    }
    ~MyClass()
    {}

private:
    int number;
};

MyClass fun(MyClass p)
{
    MyClass temp(p);
    return temp;
}


int main()
{
    cout << "1" << endl;
    MyClass obj1(10);
    cout << "2" << endl;
    MyClass obj2(0);
    cout << "3" << endl;
    MyClass obj3(obj1);
    cout << "4" << endl;
    obj2 = fun(obj3);


    return 0;
}









