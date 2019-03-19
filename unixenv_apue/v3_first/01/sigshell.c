#include <stdio.h>
#include <sys/wait.h>
#include "apue.h"

static void sig_int(int);

int main()
{
    char buf[MAXLINE];
    pid_t pid;
    int status;

    if (signal(SIGINT, sig_int) == SIG_ERR)
        err_sys("singal error!");

    printf("%% ");
    while (fgets(buf, MAXLINE, stdin) != NULL)
    {
        if (buf[strlen(buf) - 1] == '\n')
        {
            buf[strlen(buf) - 1] = 0;
        }
        if (strncmp(buf, "exit", sizeof("exit")) == 0 || strncmp(buf, "quit", sizeof("quit")) == 0)
        {
            printf("bye bye !!\n");
            break;
        }  
        if ((pid = fork()) < 0)
        {
            err_sys("fork error");
        }
        else if (pid == 0)
        {
            execlp(buf, buf, (char * )0);
            err_ret("couldn't execute: %s", buf);
            exit(127);
        }

        if ((pid = waitpid(pid, &status, 0)) < 0)
        {
            err_sys("waitpid error");
        }
        printf("%% ");
    }


    return 0;
}

void
sig_int(int signo)
{
    printf("interrupt\n%% ");
}
