#ifndef POSIX_THREADING_H
# define POSIX_THREADING_H
# include <pthread.h>
# include <stdlib.h>
# include <readline/readline.h>
# include "../utils/utils.h"

void	*ft_first_thread(void *param);
void	*ft_second_thread(void *param);
#endif