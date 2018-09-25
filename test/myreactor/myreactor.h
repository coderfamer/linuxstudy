#pragma

#include <iostream>
#include <memory>
#include <thread>
#include <list>
#include <condition_variable>
#include <mutex>

#define WORKER_THREAD_NUM 5

class CMyReactor
{
public:
    CMyReactor();
    ~CMyReactor();

    bool init(const char *ip, short nport);
    bool uninit();

    bool close_client(int clientfd);

    static void *main_loop(void *p);

private:
    //no copy function
    CMyReactor(const CMyReactor &rhs);
    CMyReactor &operator =(const CMyReactor &rhs);

    bool create_server_listener(const char *ip, short port);

    static void accept_thread_proc(CMyReactor *pReactor);
    static void worker_thread_proc(CMyReactor *pReactor);
private:
    int m_listfd = 0;
    int m_epollfd = 0;
    bool m_bStop = false;

    std::shared_ptr<std::thread> m_acceptthread;
	std::shared_ptr<std::thread> m_wokerthreads[WORKER_THREAD_NUM];

	std::condition_variable m_acceptcond;
	std::mutex m_acceptmutex;
	std::condition_variable m_workercond;
	std::mutex m_workermutex;

	std::list<int> m_listClients;
};