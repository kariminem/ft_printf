#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int				ft_printf(const char *s, ...);
int				ft_putnbr_base(uintptr_t nb, char *base);
int				ft_putnbr(int x);
int				ft_putstr(char *s);
int				ft_putchar(int c);
unsigned long	ft_strlen(const char *s);
#endif