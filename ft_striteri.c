#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	len;

	len = ft_strlen(s);
	while (len-- > 0)
		(*f)(len, &s[len]);
}
