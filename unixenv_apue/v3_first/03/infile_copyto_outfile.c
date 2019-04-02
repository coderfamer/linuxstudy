#include <stdio.h>
#include <unistd.h>
#include "apue.h"

#define BUFFSZIE 4096

int main()
{
    int buffsize;
    char buf[BUFFSZIE];

    if ((buffsize = read(STDIN_FILENO, buf, BUFFSZIE)) == -1)
        err_sys("read file error!!\n");
    if ((write(STDOUT_FILENO, buf, buffsize)) == -1)
        err_sys("write error");
    
    return 0;
}

