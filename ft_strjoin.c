#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result)
	{
		while (*s1)
			result[i++] = *s1++;
		while (*s2)
			result[i++] = *s2++;
		result[i] = '\0';
	}
	return (result);
}