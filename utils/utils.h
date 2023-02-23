#ifndef UTILS_H
# define UTILS_H
# include <pthread.h>
# include <unistd.h>
# include <stdlib.h>
# include <readline/readline.h>
# include "utils_help/utils_help.h"

extern int			counter;
extern pthread_t	thread1;
extern pthread_t	thread2;

void	*ft_first_thread(void *param);
void	*ft_second_thread(void *param);

#endif
