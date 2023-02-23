#include "digital_gate.h"

int	main(int ac, char **av)
{
	int		idx;
	char	**xcve;
	
	if (ac != 2)
	{
		ft_putstr("\033[31mError! You should've entered: ");
		ft_putstr("\033[32m<cmd> <program_index>\n\033[0m");
		return (1);
	}
	xcve = NULL;
	idx = ft_atoi(av[1]);
	if (idx == 1)
		execve("titles/posix_threading", xcve, NULL);
	else if (idx == 2)
		execve("titles/posix_signals", xcve, NULL);
	else if (idx == 3)
		execve("titles/posix_socket", xcve, NULL);
	else if (idx == 4)
		execve("titles/serialization", xcve, NULL);
	else if (idx == 5)
		execve("titles/state_machines", xcve, NULL);
	else
	{
		ft_putstr("wrong program_index!\n");
		return (1);
	}
	return(0);
}