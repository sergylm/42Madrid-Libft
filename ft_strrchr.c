# include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    char *result;

    result = NULL;
    if (!c)
        return ((char *) str);
    while (*str)
    {
        if (*str++ == (char) c)
            result = (char *) --str;
    }
    return (result);
}