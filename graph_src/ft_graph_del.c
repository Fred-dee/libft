#include <graph.h>
#include <stdio.h>

void	ft_graph_del(t_graph **g)
{
	t_list	*tmp;
	t_list	*prev;
	int		i;

	if (g != NULL && *g != NULL)
	{
		if (g[0]->adj_matrix != NULL)
		{
			i = 0;
			while (i < g[0]->num_vertices)
				free(g[0]->adj_matrix[i++]);
			free(g[0]->adj_matrix);
			g[0]->adj_matrix = NULL;
		}
		if (g[0]->vertices != NULL)
		{
			tmp = g[0]->vertices;
			while (tmp != NULL)
			{
				prev = tmp;
				tmp = tmp->next;
				ft_graph_vertexdel((t_vertex **)&prev->content);
				free(prev);
				prev = NULL;
			}
		}
		ft_memdel((void **)g);
	}
}