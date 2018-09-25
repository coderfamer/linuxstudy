#include <iostream>
#include <sys/types.h>
#include <pthread.h>


#define WORKER_THREAD_NUM 5
#define min(a, b) ((a <= b) ? (a) : (b))
int g_epollfd = 0;
bool g_bStop = false;
int g_listenfd = 0;

pthread_t g_acceptthreadid = 0;