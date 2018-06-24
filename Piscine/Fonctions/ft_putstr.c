#include "../J03/j03.h"

void    ft_putstr(char* str)
{
    int    i;

    i = 0;
    while(str[i])
        ft_putchar(i++);
}