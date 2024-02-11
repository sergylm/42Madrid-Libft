#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	
	result = malloc(len + 1);
	if (result)
		ft_strlcpy(result, &s[start], len + 1);
	return (result);
}
