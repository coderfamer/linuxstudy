#include "apue.h"

int main()
{
    printf("uid = %d, gid = %d\n", getuid(), getpid());
    exit(0);
}
