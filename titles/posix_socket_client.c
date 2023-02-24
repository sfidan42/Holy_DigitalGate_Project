#include "posix_socket.h"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char				*msg; (void)msg;
	int					sockfd;
	struct sockaddr_in	servaddr; (void)servaddr;

	printf("client\n");
	msg = "hello from client";
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (sockfd)
	{
		perror("Failed to create socket.");
		return (EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
}