#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    off_t offset;
    if ((offset = lseek(STDIN_FILENO, 0, SEEK_SET)) == -1)
        printf("cannot seek\n");
    else
        printf("can seek\n");

    printf("offset is %ld\n", offset);
    return 0;
}

