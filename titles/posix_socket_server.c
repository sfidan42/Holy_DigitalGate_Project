#include "posix_socket.h"

int	main(void)
{
	char				*buffer;
	int					sockfd;
	int					rc;
	int					n;
	t_message			msg;
	socklen_t			len;
	struct sockaddr_in	servaddr;
	
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (sockfd == -1)
	{
		perror("failed to create socket");
		return (EXIT_FAILURE);
	}
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(12345);
	servaddr.sin_addr.s_addr = INADDR_ANY;
	rc = bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr))
	if (rc == -1)
	{
		perror("failed to bind");
		close(sockfd);
		exit (EXIT_FAILURE);
	}
	len = 0;
	n = recvfrom(sockfd, (char *)buffer, ft_strlen(), MSG_WAITALL, 0, &len);
	buffer[n] = '\n';
	ft_putstr(buffer);
	close(sockfd);
	return (EXIT_SUCCESS);
}
