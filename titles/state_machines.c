#include "state_machines.h"

unsigned long	ft_fib(unsigned long n)
{
	if (n < 2)
		return (n);
	return(ft_fib(n - 1) + ft_fib(n - 2));
}

unsigned long	Next()
{
	static int	idx;
	return (idx++);
}

int	main(void)
{
	int	iteration;

	iteration = 15;
	while (iteration--)
	{
		ft_putnbr(Next());
		ft_putchar(' ');
	}
	ft_putchar('\n');
	return (0);
}