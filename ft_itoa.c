#include "libft.h"
#include <stdio.h>

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putint(int n)
{
	if (n > 0)
		return ((n - ((n / 10) * 10)) + 48);
	else
		return (((n - ((n / 10) * 10)) * -1) + 48);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == 0)
		return ("0");
	len = ft_intlen(n);
	result = (char *) malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	while (len-- > 1)
	{
		result[len] = ft_putint(n);
		n /= 10;
	}
	if (result[len] != '-')
		result[len] = ft_putint(n);
	return (result);
}
