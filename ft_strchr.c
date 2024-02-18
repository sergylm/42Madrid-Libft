#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!(char)c)
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str++ == (char) c)
			return ((char *)--str);
	}
	return (NULL);
}
