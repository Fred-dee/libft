#include <graph.h>

void	ft_graph_del(t_graph *g)
{
	t_list	*tmp;
	t_list	*prev;
	int		i;

	if (g != NULL)
	{
		if (g->adj_matrix != NULL)
		{
			i = 0;
			while (i < g->num_vertices)
				free(g->adj_matrix[i++]);
			free(g->adj_matrix);
		}
		if (g->vertices != NULL)
		{
			tmp = g->vertices;
			while (tmp != NULL)
			{
				prev = tmp;
				tmp = tmp->next;
				ft_graph_vertexdel(prev->content);
				free(prev);
				prev = NULL;
			}
		}
		free(g);
		g = NULL;
	}
}