#include <stdio.h>

int main()
{
    int c;
    c = (getchar() != EOF);
    printf("___");
    printf("%d\n", c);

    return 0;
}