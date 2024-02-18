#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = ft_strlen(dst);
	result = ft_strlen(src);
	if (n == 0)
		return (result);
	if (n <= i)
		return (result + n);
	else
		result += i;
	j = 0;
	while (src[j] && i < n - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (result);
}
