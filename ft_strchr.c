# include "libft.h"

char *ft_strchr(const char *str, int c)
{

    if (!c)
        return ((char *) str);
    while (*str++)
    {
        if (*str == (char) c)
            return ((char *) str);
    }
    return (NULL);
}