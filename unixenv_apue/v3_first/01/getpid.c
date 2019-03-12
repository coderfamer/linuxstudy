#include <stdio.h>
#include <apue.h>

int main()
{
    pid_t pid = getpid();
    printf("hello world from process ID %ld\n", (long)pid);
    return 0;
}

