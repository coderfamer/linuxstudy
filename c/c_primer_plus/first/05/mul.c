#include <stdio.h>


int main()
{
    int i = 0;
    int j = 0;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            if (j <= i) {
                printf("%d*%d=%d  ", j, i, i * j);
            }  
        }
        printf("\n");
    }

    return 0;
}