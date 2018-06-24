#include <libft.h>

int		main(int argc, char **argv)
{
	(void)argc;
	int nb;
	char *str;

	if (argc < 3)
	{
		ft_putstr("Je dois rajouter des arguments");
		return (0);
	}
	else if (argc == 3)
	{
		nb = ft_atoi(argv[3]);
		str = argv[3];
		if (ft_strcmp(argv[2], "ft_putnbr") == 0)
			ft_putnbr(nb);
		if (ft_strcmp(argv[2], "ft_putstr") == 0)
			ft_putstr(str);
	}
	else if (argc > 3)
	{
		ft_putstr("J'ai mis trop d'arguments");
		return (0);
	}
	else
	{
		ft_putstr("Je me suis trompé sur le nom de la fonction :(");
		return (0);
	}

	return(0);
}