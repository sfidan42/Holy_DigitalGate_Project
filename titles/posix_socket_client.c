#include "posix_socket.h"

int	main(void)
{
	char				*msg;
	int					sockfd;
	struct sockaddr_in	servaddr;

	msg = "hello from client";
	sockfd = socket(AF_INET)
	if (sockfd)
}