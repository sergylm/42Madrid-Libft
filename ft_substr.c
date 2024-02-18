#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (start > ft_strlen(s) || !s)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	result = malloc(len + 1);
	if (result)
		ft_strlcpy(result, &s[start], len + 1);
	return (result);
}
