#include "../J03/j03.h"

int		ft_atoi(char *str)
{
	int i;
	int signe;
	int out;

	i = 0;
	signe = 1;
	out = 0;
	while(str[i] != '\t' || str[i] != '\r' || str[i] != '\v' 
					|| str[i] != '\n' || str[i] != '\f' || str[i] != ' ')
		i++;
	if(str[i] == '+' || str[i] == '-')
		signe = str[i++] == '-' ? -1 : 1;
	while(str[i])
		out = out * 10 + str[i++] - 48;
	return(out * signe);
}