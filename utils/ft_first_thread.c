#include "utils.h"

extern int	counter;

void	*ft_first_thread(void *param)
{
	(void)param;
	while (1)
	{
		ft_putnbr(counter++);
		ft_putchar('\n');
		usleep(10000);
	}
	return (0);
}
