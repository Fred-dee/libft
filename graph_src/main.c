/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:51:32 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 14:51:33 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>
#include <stdio.h>

int main(void)
{
	t_graph *g;

	g = ft_graph_new();
	g->num_vertices = 4;
	ft_graph_genmatrices(g);
	ft_graph_print(g);
	ft_graph_addvertex(g, ft_graph_vertexnew("a", 0, 0, 5));
	ft_graph_addvertex(g, ft_graph_vertexnew("b", 0, 2, 0));
	ft_graph_addvertex(g, ft_graph_vertexnew("c", 0, 3, 0));
	ft_graph_addvertex(g, ft_graph_vertexnew("d", 0, 5, 0));
	
	return (0);
}
