# include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{

    unsigned char *aux1;
    unsigned char *aux2;

    aux1 = (unsigned char *) str1;
    aux2 = (unsigned char *) str2;
    while(n--)
        if (*aux1++ != *aux2++)
            return ((int) (*--aux1 - *--aux2));
    return (0);
}