#include <stdio.h>
#include <stdint.h>

int main() 
{
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(float));

    int16_t a;

    char a = 10;

    printf("%i\n", a);
    return 0;
}
