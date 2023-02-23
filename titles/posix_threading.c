#include "posix_threading.h"

int				counter;
pthread_t		thread1;
pthread_t		thread2;

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

void	*ft_second_thread(void *param)
{
	char	*line;

	(void)param;
	while (1)
	{
		usleep(300000);
		pthread_cancel(thread1);
		line = readline("Input \"counter\": ");
		counter = ft_atoi(line);
		free(line);
		pthread_create(&thread1, NULL, ft_first_thread, NULL);
	}
	return (0);
}

int	main(void)
{
	counter = 0;
	pthread_create(&thread1, NULL, ft_first_thread, NULL);
	pthread_create(&thread2, NULL, ft_second_thread, NULL);
	while (counter >= 0)
		usleep(5000);
	pthread_cancel(thread1);
	pthread_cancel(thread2);
	write(1, "program stopped with counter: ", 31);
	ft_putnbr(counter - 1);
	ft_putchar('\n');
	return (0);
}
