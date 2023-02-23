#include "utils_help.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	ans;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	ans = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + (str[i] - '0') * sign;
		if (ans > 2147483647)
			return (-1);
		if (ans < -2147483648)
			return (0);
		i++;
	}
	return (ans);
}
