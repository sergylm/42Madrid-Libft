# include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	result = i + j;
	j = 0;
	while (src[j] && n-- - i)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (result);
}