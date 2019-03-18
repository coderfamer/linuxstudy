#pragma once

#include <sys/types.h>
#include <sys/socket.h>
#include <WinSock2.h>
#include <iostream>

class Socket
{
public:
	Socket();
	~Socket();

	int init();
	int Accept(int fd);
private:
	
};
