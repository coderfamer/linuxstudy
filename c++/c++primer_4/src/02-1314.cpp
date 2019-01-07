#include "common.h"

int i = 42;
int main()
{
    int i = 100;
    int j = i;
    cout << j << endl;

    int k = 100, sum = 0;
    for (int k = 0; k != 10; ++k)
    {
        sum += k;
    }

    cout << k << " " << sum << endl;




    return 0;
}