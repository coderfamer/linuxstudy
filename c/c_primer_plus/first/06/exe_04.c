#include <stdio.h>

#define LETTER_NUM 26

int main()
{
    int i = 0, j = 0;
    int k = 0;
    char letters[LETTER_NUM - 1];
    for (i = 0; i < LETTER_NUM; i++) {
        letters[i] = 'A' + i;
    }
    letters[LETTER_NUM] = '\0';
    printf("%s\n", letters);

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j ++) {
            if (j <= i) {
                printf("%c ", letters[k]);
                k++;
                if (k >= LETTER_NUM) {
                    printf("\n");
                    return -1;
                }
            }
        }
        printf("\n");
    }



    return 0;
}