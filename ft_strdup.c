#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	int		len;
	int		i;

	result = 0;
	len = length((char *) str);
	result = (char *) malloc(len + 1);
	if (result)
	{
		i = 0;
		while (str[i])
		{
			result[i] = str[i];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}
