#include <libft.h>

size_t	ft_lstsize(t_list **alst)
{
	t_list	*tmp;
	size_t	ret;

	ret = 0;
	if(alst != NULL)
	{
		tmp = *alst;
		while (tmp != NULL)
		{
			ret++;
			tmp = tmp->next;
		}
	}
	return (ret);
}
