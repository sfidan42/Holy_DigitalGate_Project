#ifndef UTILS_H
# define UTILS_H
# include "unistd.h"

# define EXIT_FAILURE 1
# define EXIT_SUCCESS 0

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"

int		ft_atoi(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_strlen(char *s);
void	ft_putchar(int c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);

#endif
