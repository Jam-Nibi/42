#include "Header/j02.h"

int		main(int argc, char** argv)
{
	int nb;

	if(argc < 2)
	{
		ft_putstr("Add arguments...");

		return (0);
	}
	else if(argc == 2)
	{
		nb = (int)argv[2];
		ft_putnbr(nb);

		return (0);
	}
	else ft_putstr("Too arguments !");

	return 0;
}