#include <stdio.h>
#include <unistd.h>

int main()
{
    link("./foo/", "./foo1/");
    return 0;
}

