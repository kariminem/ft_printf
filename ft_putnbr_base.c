#include "ft_printf.h"

int	ft_putnbr_base(uintptr_t nb, char *base)
{
	int				count;
	unsigned int	base_length;

	count = 0;
	base_length = ft_strlen(base);
	if (nb >= base_length)
	{
		count += ft_putnbr_base(nb / base_length, base);
	}
	count += ft_putchar(base[(nb % base_length)]);
	return (count);
}
