#include "serialization.h"

char	*ft_send_buffer(Crash crash)
{
	char	*buffer;

	buffer = malloc(BUFFER_SIZE);
	ft_memcpy(buffer, &crash, sizeof(crash));
	return (buffer);
}

void	ft_receive_buffer(char *buffer)
{
	Crash	crash;

	crash = *(Crash *)buffer;
	ft_putstr(crash.Reason);
	ft_putchar('\n');
	ft_putnbr(crash.Code);
	ft_putchar('\n');
	free(buffer);
}

int	main(void)
{
	Crash	crash;
	char	*buffer;
	
	crash.Code = 10054;
	crash.Reason = "An existing connection was forcibly closed by the remote host";
	buffer = ft_send_buffer(crash);
	ft_receive_buffer(buffer);
	return (0);
}
