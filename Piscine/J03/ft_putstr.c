#include "../J02/ft_putchar.h"

void    ft_putstr(char* str)
{
    char    i;

    i = 0;
    while(str[i])
        ft_putchar(i++);
}

