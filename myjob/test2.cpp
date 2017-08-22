#include <iostream>

using namespace std;

char *get_memory()
{
    char p[] = "hello world";
    return p;
}

void test()
{
    char *str = NULL;
    str = get_memory();
    cout << str << endl;
}

int main()
{
    test();

    return 0;
}
