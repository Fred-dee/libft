/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:45:32 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/22 14:45:33 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

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
		if ((tmp = g[0]->vertices) != NULL)
			while (tmp != NULL)
			{
				prev = tmp;
				tmp = tmp->next;
				ft_graph_vertexdel((t_vertex **)&prev->content);
				ft_memdel((void **)&prev);
			}
		ft_memdel((void **)g);
	}
}
