#include "utils.h"

int	ft_strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + ft_strlen(s + 1));
}
