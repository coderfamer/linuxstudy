#include <stdio.h>
#include "apue.h"

int main()
{
    printf("uid = %d, gid = %d\n", getuid(), getgid());
    return 0;
}

