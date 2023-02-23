#include "utils_help.h"

void	ft_putstr(char *s)
{
	if (!*s)
		return ;
	write(1, s, 1);
	ft_putstr(s + 1);
}
