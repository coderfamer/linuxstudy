#include <stdio.h>
#include <inttypes.h>


int main()
{
    printf("short:%d\n", sizeof(short));
    printf("int:%d\n", sizeof(unsigned int));
    printf("long:%d\n", sizeof(long));
    printf("long long:%d\n", sizeof(long long));

    char grade = 'FTATE';

    printf("char grade %c %d\n", grade, grade);

    return 0;
}