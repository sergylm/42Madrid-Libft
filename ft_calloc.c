# include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	size_t	ttsize;
	void	*ptr;

	ttsize = count * n;
	ptr = malloc(ttsize);
	if (count == SIZE_MAX || n == SIZE_MAX)
		return (NULL);
	if (ptr)
		ft_memset(ptr, 0, ttsize);
	return (ptr);
}