#include <unistd.h>
//#include "ft_print_comb.h"
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while(a <= '7')
	{
		//ft_putchar(a);
		while(b <= '8')
		{
			//ft_putchar(b);
			while(c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (!(c == '9' && b == '8' && a == '7'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	ft_putchar('\n');
}
