#include <stdio.h>

int main()
{
    char ch;
    while ((ch = getchar()) != '#') {
        putchar(ch);
    }
    printf("\n");

    return 0;
}