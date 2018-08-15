#include <graph.h>
#include <stdio.h>

t_vertex	*ft_graph_getvertex_byid(t_graph *g, int id)
{
	t_list	*tmp;

	if (g != NULL && g->vertices != NULL)
	{
		tmp = g->vertices;
		while (tmp != NULL)
		{
			if (id == ((t_vertex *)tmp->content)->number)
				return ((t_vertex *)tmp->content);
			tmp = tmp->next;
		}
	}
	return (NULL);
}