/*
 * 当函数以值传递的方式使用指针，所有改变都局限于函数内部，当函数执行完毕后，即不会改变指针本身的值
 * 也不会改变指针所指的内容
 * 当函数以值传递的方式使用指针是，如果函数内部通过解引用的方式直接访问内存，函数执行完毕后，
 * 修改了指针所指的内容
 * 当函数以引用的方式使用指针时，既改变了指针所指向的内存，也改变了指针所指向的值
*/
#include <iostream>

using namespace std;

//既不交换指针，也不交换指针所指的内容
void swap1(int *p, int *q)
{
    int *temp;
    temp = p;
    p = q;
    q = temp;
}

//交换指针所指的内容
void swap2(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

//函数交换指针本身的值，即交换指针所指的内存地址
void swap3(int *&p, int *&q)
{
    int *temp = p;
    p = q;
    q = temp;
}

int main()
{
    int a = 5, b = 10;
    int *p = &a, *q = &b;
    cout << "before swap:" << endl;
    cout << "p's value is: " << p << ", q's value is: " << q << endl;
    cout << "p point to the value is: " << *p << ", q point to the value is " << *q << endl;
    swap1(p, q);
    cout << "after swap:" << endl;
    cout << "p's value is: " << p << ", q's value is: " << q << endl;
    cout << "p point to the value is: " << *p << ", q point to the value is " << *q << endl;

    a = 5, b = 10;
    p = &a, q = &b;
    cout << "before swap:" << endl;
    cout << "p's value is: " << p << ", q's value is: " << q << endl;
    cout << "p point to the value is: " << *p << ", q point to the value is " << *q << endl;
    swap2(p, q);
    cout << "after swap:" << endl;
    cout << "p's value is: " << p << ", q's value is: " << q << endl;
    cout << "p point to the value is: " << *p << ", q point to the value is " << *q << endl;

    a = 5, b = 10;
    p = &a, q = &b;
    cout << "before swap:" << endl;
    cout << "p's value is: " << p << ", q's value is: " << q << endl;
    cout << "p point to the value is: " << *p << ", q point to the value is " << *q << endl;
    swap3(p, q);
    cout << "after swap:" << endl;
    cout << "p's value is: " << p << ", q's value is: " << q << endl;
    cout << "p point to the value is: " << *p << ", q point to the value is " << *q << endl;

    return 0;
}


