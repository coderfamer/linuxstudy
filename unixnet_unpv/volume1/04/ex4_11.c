#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include "unp.h"

int main()
{
	int listenfd, connfd;
	socklen_t len;
	struct sockaddr_in servaddr, cliaddr;
	char buff[MAXLINE];
	time_t ticks;

	listenfd = socket(AF_INET, SOCK_STREAM, 0);

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(13);

	bind(listenfd, (const struct sockaddr *)&servaddr, sizeof(servaddr));

	for (;;) {
		len = sizeof(cliaddr);
		connfd = accept(listenfd, (const struct sockaddr *)&cliaddr, &len);

		printf("connection from %s, port %d\n",
			inet_ntop(AF_INET, &cliaddr.sin_addr, buff, sizeof(buff)),
			ntohs(cliaddr.sin_port));

		ticks = time(NULL);
		write(connfd, buff, strlen(buff));

		close(connfd);
	}



	return 0;
}