#include "posix_threading.h"

int				g_counter;
pthread_t		g_thread1;
pthread_t		g_thread2;

void	*ft_first_thread(void *param)
{
	(void)param;
	while (1)
	{
		ft_putnbr(g_counter++);
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
		pthread_cancel(g_thread1);
		line = readline("Input \"counter\": ");
		g_counter = ft_atoi(line);
		free(line);
		pthread_create(&g_thread1, NULL, ft_first_thread, NULL);
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr("\033[31mError! Only 1 argument!\n\033[0m");
		return (EXIT_FAILURE);
	}
	(void)av;
	g_counter = 0;
	pthread_create(&g_thread1, NULL, ft_first_thread, NULL);
	pthread_create(&g_thread2, NULL, ft_second_thread, NULL);
	while (g_counter >= 0)
		usleep(5000);
	pthread_cancel(g_thread1);
	pthread_cancel(g_thread2);
	write(1, "\033[31mprogram stopped with counter: \033[0m", 31);
	ft_putnbr(g_counter - 1);
	ft_putchar('\n');
	return (0);
}
