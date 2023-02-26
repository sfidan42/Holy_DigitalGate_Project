#include "posix_socket.h"

int	main(int ac, char **av)
{
	int					len;
	int					sockfd;
	char				*message;
	struct sockaddr_in	servaddr = {0};

	if (ac != 3)
	{
		ft_putstr(RED);
		ft_putstr("Error! it needs only 2 arguments.\n");
		ft_putstr(RESET);
		return (EXIT_FAILURE);
	}
	message = av[2];
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (sockfd == -1)
	{
		perror("client: failed to create socket");
		exit(EXIT_FAILURE);
	}
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(12345);
	servaddr.sin_addr.s_addr = INADDR_ANY;
	ft_putstr("client: sending message\n");
	len = sendto(sockfd, (const char *)message, ft_strlen(message),
			0, (const struct sockaddr *)&servaddr, sizeof(servaddr));
	if (len == -1)
		perror("client: failed to send");
	close(sockfd);
	return (EXIT_SUCCESS);
}
