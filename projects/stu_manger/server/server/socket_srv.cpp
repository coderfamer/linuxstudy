#include "socket_srv.h"

#define PORT 9999

Socket::Socket()
{
}

Socket::~Socket()
{
}

int Socket::init()
{
	int socketfd;
	socketfd = socket(AF_INET, SOCK_STREAM, 0);
	if (socketfd == -1)
	{
		perror("socket error!!");
		return;
	}

	struct sockaddr_in addr;
	memset(&addr, 0, sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	int ret = bind(socketfd, (struct sockaddr *)&addr, sizeof(addr));
	if (ret == -1)
	{
		perror("bind error!!!");
		return -1;
	}

	ret = listen(socketfd, 5);
	if (ret == -1)
	{
		perror("listen error!!");
		retun - 1;
	}
	
	std::cout << "server is ready, wait for connect" << std::endl;

	return socketfd;
}

int Socket::Accept(int fd)
{
	struct sockaddr_in client_addr;
	int len = sizeof(client_addr);
	int client_socket = accept(fd, (struct sockaddr*)&client_addr, &len);
	if (client_socket == -1)
	{
		perror("accept error");
	}
	std::cout << "accept a client " << inet_ntoa(client_addr.sin_addr) << endl;

	return client_socket;
}
