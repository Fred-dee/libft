#include <graph.h>

void	ft_graph_vertexdel(t_vertex *v)
{
	t_list	*tmp;
	t_list	*prev;

	if (v != NULL)
	{
		if (v->name != NULL)
		{
			free(v->name);
			v->name = NULL;
		}
		if (v->neighbours != NULL)
		{
			tmp = v->neighbours;
			while (tmp != NULL)
			{
				prev = tmp;
				tmp = tmp->next;
				if (prev->content != NULL)
					free(prev->content);
				free(prev);
				prev = NULL;
			}
		}
	}
}