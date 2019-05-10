#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RWRWRW (S_IXUSR |  S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH)

int main()
{
    umask(0);
    if (creat("foo", RWRWRW) < 0){
        perror("creat error for foo");
    }

    umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);

    if (creat("bar", RWRWRW) < 0) {
        perror("create error for bar");
    }

    return 0;
}

/*
int main()
{
    umask(0);

    if (creat("foo", 0644) < 0)
        perror("creating error!!!");

    umask(0601);

    if (creat("bar", 0644) < 0)
        perror("creating error!!!");

    return 0;
}*/

