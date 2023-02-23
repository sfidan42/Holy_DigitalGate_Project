#include "digital_gate.h"

int	main(void)
{
	pthread_t	thread1;
	pthread_t	thread2;

	pthread_create(&thread1, NULL, ft_first_thread, NULL);
	pthread_create(&thread2, NULL, ft_second_thread, NULL);
	return (0);
}
