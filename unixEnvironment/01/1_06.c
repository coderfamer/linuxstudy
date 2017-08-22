#include <sys/types.h>
#include <unistd.h>
#include "apue.h"

int main()
{
    printf("unix enviroment from process ID %ld\n", (long)getpid());
    exit(0);
}
