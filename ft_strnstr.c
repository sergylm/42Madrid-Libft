#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *) big);
	while (big[i] && i < n)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while ((i + j) < n && little[j] && big[i + j] == little[j])
			{
				if (!little[j + 1])
					return ((char *) &big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
