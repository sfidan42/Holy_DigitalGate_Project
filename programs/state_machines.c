#include "state_machines.h"

unsigned long	ft_fib(unsigned long n)
{
	if (n < 2)
		return (n);
	return (ft_fib(n - 1) + ft_fib(n - 2));
}

unsigned long	Next()
{
	static int	idx;

	ft_putstr("\033[0;33m");
	ft_putnbr(idx);
	ft_putstr(".\033[0m");
	return (ft_fib(idx++));
}

int	main(int ac, char **av)
{
	int	iteration;

	if (ac != 3)
	{
		ft_putstr("\033[31mError! You should've entered: \n\033[32m");
		ft_putstr("<cmd> <program_index> <iteration_count>\n\033[0m");
		return (EXIT_FAILURE);
	}
	iteration = ft_atoi(av[2]);
	if (!iteration)
	{
		ft_putstr("\033[31mError! You should've used ");
		ft_putstr("a number for iteration number!\n\033[0m");
		return (1);
	}
	while (iteration--)
	{
		ft_putnbr(Next());
		ft_putchar(' ');
	}
	ft_putchar('\n');
	return (0);
}
