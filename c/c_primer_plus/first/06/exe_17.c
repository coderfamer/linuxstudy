#include <stdio.h>

#define MAX_MONEY  1000000
#define RATE 0.08

int main()
{
    float money = MAX_MONEY;
    float rate = 0.08;
    float inter = 0;
    int i = 1;

    while (money > 0) {
        inter = money * rate;
        money += inter;
        money -= 100000;
        
        printf ("year = %d, money = %.2f\n", i, money);
        i++;
    }

    return 0;

}