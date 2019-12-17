#include <stdio.h>

int main()
{
    int x = 88;
    printf("%d %o %x\n", x, x, x);

    printf("%#o %#x %#X\n", x, x, x);

    return 0;
}