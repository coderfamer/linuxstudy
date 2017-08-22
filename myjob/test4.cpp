#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;
/*
test1 程序崩溃。get_memory不能传递动态内存，test1中str一直是NULL，strcpy将使程序崩溃
*/
void get_memory1(char *p)
{
    p = (char *)malloc(100);
}

void test1()
{
    char *str = NULL;
    get_memory1(str);
    strcpy(str, "hello wrold");
    cout << str << endl;
}
/*
test2
    可能是乱码，get_memory2返回指向”栈内存“指针，地址不是NULL，但原先的内容被清楚，新内容不可知
*/
char *get_memory2()
{
    char p[] = "hello world";
    return p;
}

void test2()
{
    char *str = NULL;
    str = get_memory2();
    cout << str << endl;
}
/*
test3
    1.输出hello
    2.内存泄露
*/
void get_memory3(char **p, int num)
{
    *p = (char *)malloc(num);
}

void test3()
{
    char *str = NULL;
    get_memory3(&str, 100);
    strcpy(str, "hello");
    cout << str << endl;
}


/*野指针*/
void test4()
{
    char *str = (char *)malloc(100);
    strcpy(str, "hello");
    free(str);
    if (str != NULL)
    {
        strcpy(str, "word");
        cout << str << endl;
    }
}

int main()
{
    //test1();
    //test2();
    //test3();
    test4();
    return 0;
}



















