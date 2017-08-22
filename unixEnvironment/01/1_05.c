#include <stdio.h>
#include "apue.h"

int main()
{
    int c;
    while ((c = getc(stdin)) != EOF)//EOF文件结束符
    {
        if (putc(c, stdout) == EOF)
        {
            err_sys("output error");
        }
    }

    if (ferror(stdin))
    {
        err_sys("input error");
    }

    exit(0);
}
