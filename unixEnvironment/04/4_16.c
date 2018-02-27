#include "apue.h"
#include <fcntl.h>

int main()
{
    if (open("tempfile", O_RDWR) < 0)
    {
        err_sys("open error");
    }
    //unistd
    if (unlink("tempfile") < 0)
    {
        err_sys("unlink error!!!");
    }

    printf("file unlinked\n");
    //unistd
    sleep(15);
    printf("done\n");


    exit(0);
}
