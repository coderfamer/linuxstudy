#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
int main()
{
    int16_t x = 100;

    char ahex[32] = {'\0'};
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    snprintf(ahex, sizeof(ahex), "%#X", x);

    printf("%s\n", ahex);


    int u_a = 0101;//65u;

    printf("%d\n", u_a);

    bool b_flag = true;
    printf("%d\n", b_flag);

    int32_t me32 = 45933945;
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}