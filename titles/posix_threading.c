#include "posix_threading.h"

int				counter;
pthread_t		thread1;
pthread_t		thread2;

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
