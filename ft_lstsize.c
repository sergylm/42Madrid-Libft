#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		len;

	if (!lst)
		return (0);
	aux = lst;
	len = 1;
	while (aux->next)
	{
		aux = aux->next;
		len++;
	}
	return (len);
}
