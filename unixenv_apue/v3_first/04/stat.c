#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    struct stat *buf = (struct stat *)malloc(sizeof(struct stat));
    char pathname[24] = "./test";

    stat(pathname, buf);

    printf("st_dev = %lu\nst_szie = %ld\n", buf->st_dev, buf->st_size);
    printf("st_mode = %u\n", buf->st_mode);
    return 0;
}

