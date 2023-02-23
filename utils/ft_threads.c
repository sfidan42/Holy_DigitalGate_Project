#include "utils.h"

extern int 				counter;
extern pthread_mutex_t	mutex;

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
		pthread_mutex_lock(&mutex);
		line = readline("Read for \"counter\": ");
		counter = ft_atoi(line);
		free(line);
		pthread_mutex_unlock(&mutex);
	}
	return (0);
}
