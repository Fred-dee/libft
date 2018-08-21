#include <graph.h>

void	ft_graph_vertexdel(t_vertex **v)
{
	t_list	*tmp;
	t_list	*prev;

	if (v != NULL && *v != NULL)
	{
		if (v[0]->name != NULL)
			ft_strdel(&v[0]->name);
		if (v[0]->neighbours != NULL)
		{
			tmp = v[0]->neighbours;
			while (tmp != NULL)
			{
				prev = tmp;
				tmp = tmp->next;
				if (prev->content != NULL)
					ft_memdel(&prev->content);
				free(prev);
				prev = NULL;
			}
		}
		ft_memdel((void **)v);
	}
}