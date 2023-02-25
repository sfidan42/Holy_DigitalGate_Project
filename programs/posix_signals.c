#include "posix_signals.h"

void	ft_signal_handler(int signal)
{
	(void)signal;
	ft_putstr(BLUE);
	ft_putstr("\n# of times elapsed in seconds: ");
	ft_putstr(RESET);
	ft_putnbr(g_counter);
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr(RED);
		ft_putstr("Error! Only 1 argument!\n");
		ft_putstr(RESET);
		return (EXIT_FAILURE);
	}
	(void)av;
	ft_putstr("Please, press Ctrl+c to see elapsed time.\n");
	signal(SIGINT, ft_signal_handler);
	g_counter = 0;
	while (1)
	{
		sleep(1);
		g_counter++;
	}
	return (0);
}
