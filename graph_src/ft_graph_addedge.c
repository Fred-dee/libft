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
	if (g != NULL  && g->adj_matrix != NULL && from < g->num_vertices && to < g->num_vertices)
	{
		g->adj_matrix[from][to] = 1;
		g->adj_matrix[to][from] = 1;
	}
}
