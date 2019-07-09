#include <stdio.h>

int main()
{
    int i = 0;
    char letter[26];
    for (i = 0; i < 26; i++)
    {
        letter[i] = 'a' + i;
    }

    for (i = 0; i < 26; i++) {
        printf("%c ", letter[i]);
    }
    printf("\n");
    


    return 0;
}