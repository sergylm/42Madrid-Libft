#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\v') || (*str == '\n')
		|| (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (i * sign);
		i = (i * 10) + (*str++ - 48);
	}
	return (i * sign);
}
