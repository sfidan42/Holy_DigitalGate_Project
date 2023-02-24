#ifndef POSIX_SOCKET_H
# define POSIX_SOCKET_H
# include <netinet/in.h>
# include <sys/socket.h>
# include <stdio.h>
# include <unistd.h>
# include "../utils/utils.h"

typedef struct s_message
{
	char	*text;
	size_t	text_size;
}			t_message;

#endif