#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
    int fd;
    char filename[24] = "./test";
    struct stat *buf = (struct stat *)malloc(sizeof(struct stat));
    fd = open(filename, O_RDWR);

    fstat(fd, buf);

    printf("file_size = %ld\n", buf->st_size);

    return 0;
}

