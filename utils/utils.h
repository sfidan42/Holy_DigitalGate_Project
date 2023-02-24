#ifndef UTILS_H
# define UTILS_H
# include "unistd.h"
# define EXIT_FAILURE 1
# define EXIT_SUCCESS 0

int 	ft_atoi(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_strlen(char *s);
void	ft_putchar(int c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);

#endif
