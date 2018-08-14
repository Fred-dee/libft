#include <graph.h>

t_vertex	*ft_graph_getvertex_byid(t_graph *g, int id)
{
	t_list	*tmp;

	if (g != NULL && g->vertices != NULL)
	{
		tmp = g->vertices;
		while (tmp != NULL)
		{
			if (id == *(int *)((t_vertex *)tmp->content->)number)
				return (tmp->content);
			tmp = tmp->next;
		}
	}
	return (NULL);
}