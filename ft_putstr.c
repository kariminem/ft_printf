#include "ft_printf.h"

int	ft_putstr(char *s)
{	
	int	count;

	count = 0;
	if (!s)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	while(*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}