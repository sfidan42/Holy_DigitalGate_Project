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

int	main(int ac, char **av)
{
	Crash	crash;
	char	*buffer;

	if (ac != 4)
	{
		ft_putstr("\033[31mError! You should've entered: \n\033[32m");
		ft_putstr("<cmd> <program_index> <code> <reason>\n\033[0m");
		ft_putstr("\033[35mexample: \033[0m./digital_gate 5 10054 ");
		ft_putstr("\"An existing connection was forcibly");
		ft_putstr(" closed by the remote host\"\n");
		return (EXIT_FAILURE);
	}
	crash.Code = ft_atoi(av[2]);
	crash.Reason = av[3];
	buffer = ft_send_buffer(crash);
	ft_receive_buffer(buffer);
	return (0);
}
