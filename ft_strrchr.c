#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	result = NULL;
	if (!(char) c)
		return ((char *) str + ft_strlen(str));
	while (*str)
	{
		if (*str++ == (char) c)
			result = (char *) str - 1;
	}
	return (result);
}
