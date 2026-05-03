#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include<stdint.h>

int	ft_printf(char *s, ...);
unsigned long   ft_strlen(char *s);
int    ft_putnbr_base(uintptr_t nb, char *base);
int	ft_putnbr(int x);
int	ft_putstr(char *s);
int	ft_putchar(int c);
#endif