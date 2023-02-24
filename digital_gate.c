#include "digital_gate.h"

void	*ft_posix_socket_driver(void *pos_soc)
{
	t_posix_socket ps;
	
	ps = *(t_posix_socket *)pos_soc;
	ft_putstr(ps.name);
	ft_putchar('\n');
	return (0);
}

void	ft_posix_socket(void)
{
	pthread_t		thread1;
	pthread_t		thread2;
	t_posix_socket	ps1;
	t_posix_socket	ps2;

	ps1.name = "tiltes/posix_socket_server";
	ps2.name = "tiltes/posix_socket_client";
	pthread_create(&thread1, NULL, ft_posix_socket_driver, &ps1);
	sleep(1);
	pthread_create(&thread2, NULL, ft_posix_socket_driver, &ps2);
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
}

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
	{
		ft_posix_socket();
		return (EXIT_SUCCESS);
	}
	if (idx == 4)
		return (execve("titles/serialization", av, NULL));
	if (idx == 5)
		return (execve("titles/state_machines", av, NULL));
	else
	{
		ft_putstr("\033[31mError! Wrong program index!\n\033[0m");
		return (EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
}