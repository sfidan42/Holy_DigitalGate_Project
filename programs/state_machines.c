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

	ft_putstr(YELLOW);
	ft_putnbr(idx);
	ft_putchar('.');
	ft_putstr(RESET);
	return (ft_fib(idx++));
}

int	main(int ac, char **av)
{
	int	iteration;

	if (ac != 3)
	{
		ft_putstr(RED);
		ft_putstr("Error! You should've entered: \n");
		ft_putstr(GREEN);
		ft_putstr("<cmd> <program_index> <iteration_count>\n");
		ft_putstr(RESET);
		return (EXIT_FAILURE);
	}
	iteration = ft_atoi(av[2]);
	if (!iteration)
	{
		ft_putstr(RED);
		ft_putstr("Error! You should've used ");
		ft_putstr("a number for iteration number!\n");
		ft_putstr(RESET);
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
