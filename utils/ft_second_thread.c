#include "utils.h"

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
