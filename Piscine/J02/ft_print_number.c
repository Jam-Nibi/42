#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	char	a;

	a = '0';
	while(a <= '9')
		ft_putchar(a++);
}
