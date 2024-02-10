#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*aux;

	aux = (unsigned char *) str;
	while (n--)
		if (*aux++ == (unsigned char) c)
			return ((unsigned char *)--aux);
	return (NULL);
}
