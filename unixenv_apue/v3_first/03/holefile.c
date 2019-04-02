#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "apue.h"

char buf1[]  = "abcdefghij";
char buf2[] = "ABCDEFTHIJ";



int main()
{
    int fd;
    if ((fd = creat("file.hole", FILE_MODE)) < 0)
        err_sys("create error!!\n");
    if (write(fd, buf1, 10) != (ssize_t)strlen(buf1))
        err_sys("write error!!!\n");
    if (lseek(fd, 16384, SEEK_END) == -1)
        err_sys("lseek error!!!\n");
    if (write(fd, buf2, 10) != (ssize_t)strlen(buf2))
        err_sys("write buf2 error!\n");

    if ((fd = creat("file.nohole", FILE_MODE)) < 0)
        err_sys("CREAT ERROR!!!\n");

    int i = 0;
    for (; i < 16404; i++)
    {
        if (write(fd, (const void *)&i, 1) != 1)
            err_sys("write file.nohole error!!!\n");
    }
    return 0;
}

