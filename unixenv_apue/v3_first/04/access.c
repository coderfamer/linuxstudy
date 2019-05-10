#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    int ret;
    if (argc != 2)
        return 1;

    ret = access(argv[1], F_OK);

    if (ret != 0)
        printf("file no existened!!\n");
    else
        printf("file existened!!\n");

    if (access(argv[1], R_OK) == 0)
        printf("reading ok!!!\n");

    if (access(argv[1], W_OK))
        printf("writeing ok!!\n");
    if (access(argv[1], X_OK))
        printf("execute ok!!\n");
    return 0;
}

