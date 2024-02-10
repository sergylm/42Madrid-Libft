#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = str;
	i = 0;
	while (i < n)
	{
		aux[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
