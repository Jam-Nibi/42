#include "../J03/j03.h"

char    *ft_strrev(char *str)
{
    int end;
    int begin;

    begin = 0;
    end = ft_strlen(str) - 1;
    while(end > begin)
    {
        ft_swap(str + begin, str + end);
        begin++;
        end--;
    }
    return (str);
}