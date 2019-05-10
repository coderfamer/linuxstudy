#include <iostream>

#include "cthread.h"

using namespace std;

void CTask::SetData(void *data)
{
    m_ptrData = data;
}

queue<CTask*>* CThreadPool::taskQueue2 = new queue<CTask*>[1];
queue<CTask*>* CThreadPool::taskQueue1 = new queue<CTask*>[1];
queue<CTask*>* CThreadPool::taskback = new queue<CTask*>[1];

pthread_mutex_t CThreadPool::m_threadMutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t CThreadPool::m_taskMutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t CThreadPool::m_threadCond = PTHREAD_COND_INITIALIZER;
pthread_cond_t CThreadPool::m_taskCond = PTHREAD_COND_INITIALIZER;

CThreadPool::CThreadPool(int threadNum)
{
    this->m_threadNum = threadNum;
    Create();
}

int CThreadPool::swapqueue(queue<CTask*>* &a, queue<CTask *>* &b)
{
    queue<CTask *>*temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}


void *CThreadPool::ThreadFunc(void *arg)
{
    pthread_t tid = pthread_self();
    while (1)
    {
        CTask *task;
        if (taskQueue1->empty() && !taskQueue2->empty())
        {
            swapqueue(taskQueue1, taskQueue2);
        }

        pthread_mutex_lock(&m_threadMutex);
        
        if (taskQueue1->empty())
        {
            pthread_cond_wait(&m_threadCond, &m_threadMutex);
            pthread_mutex_unlock(&m_threadMutex);
            continue;
        }

        task = taskQueue1->front();
        taskQueue1->pop();
        pthread_mutex_unlock(&m_threadMutex);

        task->Run();

        pthread_mutex_lock(&m_taskMutex);
        taskback->push(task);

        pthread_mutex_unlock(&m_taskMutex);
    }
    return 0;
}

int CThreadPool::AddTask(CTask *task)
{
    if (pthread_mutex_trylock(&m_threadMutex) == 0)
    {
        taskQueue1->push(task);
        pthread_cond_signal(&m_threadCond);
        cout << "add to queuel" << endl;
        pthread_mutex_unlock(&m_threadMutex);
    } else {
        taskQueue2->push(task);
        pthread_cond_signal(&m_threadCond);
        cout << "add to queue2" << endl;
        pthread_mutex_unlock(&m_threadMutex);
    }

    return 0;
}

CTask* CThreadPool::GetTaskBack()
{
    CTask *task;

    if (!taskback->empty())
    {
        task = taskback->front();
    }
}
