#include "../Header/j02.h"

void    ft_putstr(char* str)
{
    char    i;

    i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}