#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	if (src == NULL && dst == NULL)
		return (NULL);
	aux_dst = (unsigned char *) dst;
	aux_src = (unsigned char *) src;
	if (aux_dst >= aux_src)
	{
		while (n --)
			aux_dst[n] = aux_src[n];
	}
	else
		ft_memcpy(aux_dst, aux_src, n);
	return (dst);
}
