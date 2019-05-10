#pragma once

#include <string>
#include <queue>
#include <pthread.h>
#include <iostream>


class CTask
{
public:
    CTask() {}
    ~CTask() {}

    CTask(std::string taskName)
    {
        this->m_strTaskName = taskName;
        m_ptrData = NULL;
    }

    virtual int Run() = 0;
    void SetData(void *data);

protected:
    std::string m_strTaskName;
    void *m_ptrData;

private:

};


class CThreadPool
{
public:
    CThreadPool(int);
    static int swapqueue(std::queue<CTask *>*&, std::queue<CTask*> *&);
    static void* ThreadFunc(void *arg);
    int Create();
    int AddTask(CTask *);
    CTask* GetTaskBack();
    int Check();
    static int clearQueue(std::queue<CTask *>*);
    ~CThreadPool();

private:
    int m_threadNum;
    static pthread_mutex_t m_threadMutex;
    static pthread_mutex_t m_taskMutex;
    static pthread_cond_t m_threadCond;
    static pthread_cond_t m_taskCond;

    static std::queue<CTask *> *taskQueue1;
    static std::queue<CTask *> *taskQueue2;
    static std::queue<CTask *>* taskback;
};
