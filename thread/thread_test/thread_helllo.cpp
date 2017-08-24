#include <iostream>
#include <pthread.h>

using namespace std;

void *pthread_main(void *)
{
    cout << "hello pthread!!!" << endl;
    return NULL;
}

int main()
{
    pthread_t pid;

    pthread_create(&pid, NULL, pthread_main, NULL);
}
