/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_addedge.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:56:24 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 12:56:25 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

void	ft_graph_addedge(t_graph *g, int from, int to)
{
	int			*num_1;
	int			*num_2;
	t_vertex	*from_v;
	t_vertex	*to_v;

	if (g != NULL  && g->adj_matrix != NULL && from < g->num_vertices && to < g->num_vertices)
	{
		g->adj_matrix[from][to] = 1;
		g->adj_matrix[to][from] = 1;
		from_v = ft_graph_getvertex_byid(g, from);
		to_v = ft_graph_getvertex_byid(g, to);
		if (from_v != NULL && to_v != NULL)
		{
			num_1 = (int *)ft_memalloc(sizeof(int));
			num_2 = (int *)ft_memalloc(sizeof(int));
			*num_1 = from;
			*num_2 = to; 
			if (from_v->neighbours == NULL)
				from_v->neighbours = ft_lstnew(num_2, sizeof(int));
			else
				ft_lstaddback(&from_v->neighbours, ft_lstnew(num_2, sizeof(int)));
			if (to_v->neighbours == NULL)
				to_v->neighbours = ft_lstnew(num_1, sizeof(int));
			else
				ft_lstaddback(&to_v->neighbours, ft_lstnew(num_1, sizeof(int)));
		} 
	}
}
