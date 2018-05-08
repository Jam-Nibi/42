#include "ft_putchar.h"

void	ft_putnbr(int nb)
{
	char	a;
	char	c;

	c = nb;
	while(c /= 10)
		a *= 10;

	while(a)
	{
		c = nb / a;
		ft_putchar(c + 48);
		c = nb - c * a;
		a /= 10;
	}
	

}

