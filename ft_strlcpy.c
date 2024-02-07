# include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	unsigned int	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (--n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}