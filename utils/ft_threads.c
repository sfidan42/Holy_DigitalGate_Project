#include "utils.h"

extern int counter;

void	*ft_first_thread(void *param)
{
	(void)param;
	while (1)
	{
		usleep(100000);
		ft_putchar('\n');
		ft_putnbr(counter++);
	}
	return (0);
}

void	*ft_second_thread(void *param)
{
	char	*line;

	(void)param;
	while (1)
	{
		usleep(500000);
		
		line = readline("Read for \"counter\": ");
		counter = ft_atoi(line);
		free(line);
	}
	return (0);
}
