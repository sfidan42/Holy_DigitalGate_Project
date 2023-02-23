#include "digital_gate.h"

int				counter;
pthread_mutex_t	mutex;

int	main(void)
{
	pthread_t	thread1;
	pthread_t	thread2;

	pthread_mutex_init(&mutex, NULL);
	pthread_create(&thread1, NULL, ft_first_thread, NULL);
	pthread_create(&thread2, NULL, ft_second_thread, NULL);
	while (counter >= 0)
		sleep(1);
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	pthread_mutex_destroy(&mutex);
	write(1, "program stopped with counter: ", 31);
	ft_putnbr(counter);
	ft_putchar('\n');
	return (0);
}
