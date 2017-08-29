#include "apue.h"

#include <fcntl.h>

int main(int argc, char *argv[])
{
    int val;
    if (argc != 2)
    {
        err_quit("usage: a.out <descriiptor#>");
    }

    if ((val = fcntl(atoi(argv[1]), F_GETFL, 0)) < 0)
    {
        err_sys("fcntl error for fd %d", atoi(argv[1]));
    }

}
