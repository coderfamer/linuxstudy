#include <stdio.h>

void print_arr(void);

int main()
{
    int arr[20] = {10, 10};
    int i;
    for (i = 0; i < 20; i ++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    print_arr();

    return 0;
}

void print_arr(void)
{
    int arr[20] = {10, 10};
    int i;
    for (i = 0; i < 20; i ++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}