#include "posix_socket.h"

int	main(void)
{
	t_message			msg;
	int					len;
	int					sockfd;
	struct sockaddr_in	servaddr;

	printf("client\n");
	msg.text = "hello from client";
	msg.text_size = ft_strlen(msg.text);
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (sockfd)
	{
		perror("Failed to create socket.");
		exit (EXIT_FAILURE);
	}
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(12345);
	servaddr.sin_addr.s_addr = INADDR_ANY;
	len = sendto(sockfd, (const char *)msg.text, msg.text_size,
		0, (const struct sockaddr *)&servaddr, sizeof(servaddr));
	if (len == -1)
		perror("failed to send");
	close(sockfd);
	return(EXIT_SUCCESS);
}
