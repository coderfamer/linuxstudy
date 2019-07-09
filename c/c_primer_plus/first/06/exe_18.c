#include <stdio.h>

#define DUNBAR_NUM 150

int main()
{
    int num = 5;
    int i = 1;
    while (num <= DUNBAR_NUM) {
        num -= i;
        num *= 2;
        i++;
        printf("%d %d\n", i, num);
    }
    


    return 0;
}