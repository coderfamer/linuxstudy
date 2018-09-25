

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
}

