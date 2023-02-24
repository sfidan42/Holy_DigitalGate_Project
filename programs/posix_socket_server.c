#include "posix_socket.h"

int	main(void)
{
	int					rc;
	int					n;
	int					sockfd;
	char				buffer[50];
	socklen_t			len;
	struct sockaddr_in	servaddr;

	buffer = {0};
	servaddr = {0};
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (sockfd == -1)
	{
		perror("server: failed to create socket");
		exit(EXIT_FAILURE);
	}
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(12345);
	servaddr.sin_addr.s_addr = INADDR_ANY;
	rc = bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr));
	if (rc == -1)
	{
		perror("server: failed to bind");
		close(sockfd);
		exit(EXIT_FAILURE);
	}
	len = 0;
	n = recvfrom(sockfd, (char *)buffer, 50, MSG_WAITALL, 0, &len);
	buffer[n] = '\n';
	ft_putstr("server: ");
	ft_putstr(buffer);
	close(sockfd);
	return (EXIT_SUCCESS);
}
