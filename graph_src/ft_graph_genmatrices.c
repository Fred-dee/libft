/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_genmatrices.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:57:27 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 12:57:28 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

static void	compile_edges(t_graph *g)
{
	t_list		*outer;
	t_list		*inner;
	t_vertex	*tmp;

	if (g != NULL && g->adj_matrix != NULL && (outer = g->vertices) != NULL)
		while (outer != NULL)
		{
			tmp = (t_vertex *)outer->content;
			if (tmp->neighbours != NULL)
			{
				inner = tmp->neighbours;
				while (inner != NULL)
				{
					if (tmp->number == *(int *)inner->content)
						g->adj_matrix[tmp->number][tmp->number]++;
					else
					{
						g->adj_matrix[tmp->number][*(int *)inner->content] = 1;
						g->adj_matrix[*(int *)inner->content][tmp->number] = 1;
					}
					inner = inner->next;
				}
			}
			outer = outer->next;
		}
}

int			ft_graph_genmatrices(t_graph *g)
{
	int	i;
	int	j;

	if (g != NULL)
	{
		if ((g->adj_matrix = (int **)malloc(sizeof(int *)
			* g->num_vertices)) == NULL)
			return (FALSE);
		i = 0;
		j = 0;
		while (i < g->num_vertices)
		{
			if ((g->adj_matrix[i] = (int *)malloc(sizeof(int)
				* g->num_vertices)) == NULL)
				return (FALSE);
			j = 0;
			while (j < g->num_vertices)
				g->adj_matrix[i][j++] = 0;
			i++;
		}
		compile_edges(g);
	}
	return (TRUE);
}
