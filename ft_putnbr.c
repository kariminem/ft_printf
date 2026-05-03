#include "ft_printf.h"


int	ft_putnbr(int x)
{
	int	count;
	long n;

	count = 0;
	n = (long)x;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
        count += ft_putnbr(n / 10);	
	count += ft_putchar((n%10) + '0');
	return(count);
}