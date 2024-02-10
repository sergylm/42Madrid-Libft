#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	if (src == NULL && dst == NULL)
		return (NULL);
	aux_dst = (unsigned char *) dst;
	aux_src = (unsigned char *) src;
	while (n--)
		*aux_dst++ = *aux_src++;
	return (dst);
}
