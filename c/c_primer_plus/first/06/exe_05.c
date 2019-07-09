#include <stdio.h>
#include <ctype.h>

int main()
{
    char letter;
    int row = 0;
    int i = 0, j = 0, k = 0;

    printf("please enter a letter: \n");
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z') {
        letter = toupper((int)letter);
    }

    if (letter < 'A' || letter > 'Z') {
        printf("not a letter!!\n");
        return -1;
    }


    row = letter - 'A';
    printf("%d\n", row);

    for (i = 0; i < row + 1; i++ ) {
        for (j = 0; j <= (row - i - 1); j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c", letter - row + j);
        }
        for (j = i; j > 0; j--) {
            printf("%c", letter - row + j - 1);
        }
        printf("\n");
    }



    return 0;
}