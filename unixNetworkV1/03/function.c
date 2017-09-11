/*

*/

#include <string.h>

bzero(void *dest, size_t nbytes);



#include <arpa/inet.h>
/**/
int inet_aton(const char *strptr, struct int_addr *addrptr);

/*字节间的转换*/
#include <netinet/in.h>

uint16_t htons( uint16_t host16bitvalue);//host->to->net(short)
uint32_t htonl(uint32_t host32bitvalue);
uint16_t ntohs(uint16_t net16bitvalue);
uint32_t ntohl(uint32_t net32bitvalue);
