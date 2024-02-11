#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(len + 1);
	if (result)
	{
		while (len--)
			result[i++] = s[start++];
		result[i] = '\0';
	}
	return (result);
}
