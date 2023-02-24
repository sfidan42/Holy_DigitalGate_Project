#include "digital_gate.h"

int	main(int ac, char **av)
{
	int		idx;

	if (ac == 1)
	{
		ft_putstr("\033[31mError! At least 1 arg is required!\n\033[0m");
		return (EXIT_FAILURE);
	}
	idx = ft_atoi(av[1]);
	if (idx == 1)
		return (execve("titles/posix_threading", av, NULL));
	if (idx == 2)
		return (execve("titles/posix_signals", av, NULL));
	if (idx == 3)
		return (execve("titles/posix_socket_server", av, NULL));
	if (idx == 4)
		return (execve("titles/posix_socket_client", av, NULL));
	if (idx == 5)
		return (execve("titles/serialization", av, NULL));
	if (idx == 6)
		return (execve("titles/state_machines", av, NULL));
	else
	{
		ft_putstr("\033[31mError! Wrong program index!\n\033[0m");
		return (EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
}
