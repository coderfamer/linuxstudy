#include <stdio.h>

#define PRAISE "You are an extraordianry being."

int main()
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}