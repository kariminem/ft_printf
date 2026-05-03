#include "ft_printf.h"
int	ft_printf(char *s, ...)
{
	int	count;
	unsigned long	i;
	uintptr_t address;

	i = 0;
	count = 0;
	va_list args;
	va_start(args, s);
	while (i < ft_strlen(s))
	{
		if (s[i] != '%')
			count += ft_putchar(s[i]);
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '%')
				count += ft_putchar('%');
			if (s[i] == 'd' || s[i] == 'i')
				count += ft_putnbr(va_arg(args, int));
			if (s[i] == 's')
				count += ft_putstr(va_arg(args, char*));
			if (s[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			if (s[i] == 'x')
				count += ft_putnbr_base(va_arg(args , unsigned int), "0123456789abcdef");
			if (s[i] == 'X')
				count += ft_putnbr_base(va_arg(args , unsigned int), "0123456789ABCDEF");
			if (s[i] == 'u')
				count += ft_putnbr_base(va_arg(args , unsigned int), "0123456789");
			if (s[i] == 'p')
				{
					count += ft_putstr("0x");
					address = (uintptr_t)va_arg(args, void *);
					if (!address)
						count += ft_putchar('0');
					else
						count += ft_putnbr_base((uintptr_t)address, "0123456789abcdef");
				}
		}
		i++;
	}
	va_end(args);
	return(count);
}
