#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "apue.h"

int main(int argc, char *argv[])
{
    fprintf(stderr, "Eacces: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    return 0;
}

