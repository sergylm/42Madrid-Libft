# include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = ft_strlen(dst);
	result = ft_strlen(src) + n;
	if (n < 1)
	{
		j = 0;
		while (src[j] && n--)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (result);
}