#include "posix_signals.h"

int	counter;

void	ft_signal_handler(int signal)
{
	(void)signal;
	ft_putstr("\n\033[34m# of times elapsed in seconds: \033[0m");
	ft_putnbr(counter);
	ft_putchar('\n');
}

int	main(void)
{
	signal(SIGINT, ft_signal_handler);
	counter = 0;
	while (1)
	{
		sleep(1);
		counter++;
	}
	return (0);
}
