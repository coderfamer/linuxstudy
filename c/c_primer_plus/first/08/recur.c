#include <stdio.h>

void up_and_down(int);

int main()
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n) 
{
    printf("Level %d:n location %p \n", n, &n);
    if (n < 4) {
        up_and_down(n + 1);
    } 
    printf("level %d:n location %p \n", n, &n);
}