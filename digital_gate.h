#ifndef DIGITAL_GATE_H
# define DIGITAL_GATE_H
# include "utils/utils.h"

typedef struct
{
	int		Code;
	char	*Reason;
}			Crash;

void	*ft_first_thread(void *param);
void	*ft_second_thread(void *param);

#endif