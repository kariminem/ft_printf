#include "ft_printf.h"

unsigned long	ft_strlen(char *s)
{
	unsigned long	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
