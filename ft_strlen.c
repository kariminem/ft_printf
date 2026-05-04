#include "ft_printf.h"

unsigned long	ft_strlen(const char *s)
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
