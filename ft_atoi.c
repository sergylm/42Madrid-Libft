# include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;

    i = 0;
    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str++ == '-')
            sign = -1;
    }
    
    while(*str)
    {
        if (!ft_isdigit(*str))
            return (0);
        i = (i * 10) + (*str++ - 48);
    }
    return (i * sign);
}