#include <stdio.h>

void test(int *n);

int main()
{
    int *p;
    int q = 10;
    p = &q;
    printf("%d\n", *p);
    test(p);
    printf("%d\n", *p);
    return 0;
}

void test(int *n)
{
    *n = 20;
}