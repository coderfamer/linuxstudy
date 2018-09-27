#include <sys/epoll.h>
#include <sys/socket.h>
#include <unistd.h>
#include "myreactor.h"

#define min(a, b) ((a <= b) ? (a) : (b))

CMyReactor::CMyReactor()
{

}

CMyReactor::~CMyReactor()
{

}

bool CMyReactor::init(const char *ip, short nport)
{
	if (!create_server_listener(ip, nport))
	{
		std::cout << "Unable to bind: " << ip << " " << nport << "." << std::endl;
		return false;
	}

	std::cout << "main thread id = " << std::this_thread::get_id() << std::endl;

	m_acceptthread.reset(new std::thread(CMyReactor::accept_thread_proc, this));

	for (auto &t : m_workerthreads)
	{
		t.reset(new std::thread(CMyReactor::worker_thread_proc, this));
	}

	return true;
}

bool CMyReactor::uninit()
{
	m_bStop = true;
	m_acceptcond.notify_one();
	m_workercond.notify_all();

	m_acceptthread->join();
	for (auto &t : m_workerthreads)
	{
		t->join();
	}

	::epollctl(m_epollfd, EPOLL_CTL_DEL, m_listenfd, NULL);

	::shutdown(m_listenfd, SHUT_RDWR);
	::close
}

