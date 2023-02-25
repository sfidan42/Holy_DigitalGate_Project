#include "posix_socket.h"

int	main(void)
{
	int					rc;
	int					n;
	int					sockfd;
	socklen_t			len;
	char				buffer[50] = {0};
	struct sockaddr_in	servaddr = {0};

	ft_putstr("server is started.\n");
	ft_putstr("Please type \"./digital_gate 4\" in another terminal.\n");
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
	ft_putstr("server: the message -> ");
	ft_putstr(buffer);
	ft_putstr(YELLOW);
	ft_putchar('(');
	ft_putstr(ip address here!!);
	ft_putchar(')');
	ft_putstr(RESET);
	close(sockfd);
	return (EXIT_SUCCESS);
}
