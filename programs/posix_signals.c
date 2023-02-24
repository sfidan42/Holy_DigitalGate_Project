#include "posix_signals.h"

void	ft_signal_handler(int signal)
{
	(void)signal;
	ft_putstr("\n\033[34m# of times elapsed in seconds: \033[0m");
	ft_putnbr(g_counter);
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr("\033[31mError! Only 1 argument!\n");
		return (EXIT_FAILURE);
	}
	(void)av;
	ft_putstr("Please, press Ctrl+c to see elapsed time.\n");
	signal(SIGINT, ft_signal_handler);
	counter = 0;
	while (1)
	{
		sleep(1);
		g_counter++;
	}
	return (0);
}
