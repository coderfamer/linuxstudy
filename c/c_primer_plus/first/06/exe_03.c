#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (j <= i) {
                printf("%c ", 'F' - j);
            }
        }
        printf("\n");
    }

    return 0;
}