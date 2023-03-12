#include "digital_gate.h"

int	main(int ac, char **av, char **aw)
{
	int	idx;

	if (ac == 1)
	{
		ft_putstr(RED);
		ft_putstr("Error! At least 1 arg is required!\n");
		ft_putstr(RESET);
		return (EXIT_FAILURE);
	}
	idx = ft_atoi(av[1]);
	if (idx == 1)
		return (execve("programs/posix_threading", av, aw));
	if (idx == 2)
		return (execve("programs/posix_signals", av, NULL));
	if (idx == 3)
		return (execve("programs/posix_socket_server", av, NULL));
	if (idx == 4)
		return (execve("programs/posix_socket_client", av, NULL));
	if (idx == 5)
		return (execve("programs/serialization", av, NULL));
	if (idx == 6)
		return (execve("programs/state_machines", av, NULL));
	else
	{
		ft_putstr(RED);
		ft_putstr("Error! Wrong program index!\n");
		ft_putstr(RESET);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
