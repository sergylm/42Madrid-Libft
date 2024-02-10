# include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str++ == (char) c)
            return ((char *) --str);
    }
    if (!c)
        return ((char *)str);
    return (NULL);
}