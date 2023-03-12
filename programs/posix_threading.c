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
		usleep(100000);
		line = readline("Input \"counter\": ");
		g_counter = ft_atoi(line);
		free(line);
	}
	return (0);
}

int	main(int ac, char **av)
{
	// use mutex to protect g_counter var instead of cancel and create.
	if (ac != 2)
	{
		ft_putstr(RED);
		ft_putstr("Error! Only 1 argument!\n");
		ft_putstr(RESET);
		return (EXIT_FAILURE);
	}
	(void)av;
	g_counter = 0;
	pthread_create(&g_thread1, NULL, ft_first_thread, NULL);
	pthread_create(&g_thread2, NULL, ft_second_thread, NULL);
	usleep(1000);
	while (g_counter > 0)
		usleep(5000);
	pthread_cancel(g_thread1);
	pthread_cancel(g_thread2);
	ft_putstr(RED);
	ft_putstr("program stopped with counter:   ");
	ft_putstr(RESET);
	ft_putnbr(g_counter - 1);
	ft_putchar('\n');
	return (0);
}
