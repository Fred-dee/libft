/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 11:11:01 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 11:11:02 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H_
# define GRAPH_H_
#include "libft.h"

typedef struct	s_vertex
{
	char		*name;
	int			number;
	int			*neighbours;
	int			num_ants;
	int			x_cord;
	int			y_cord;
}				t_vertex;

typedef struct	s_graph
{
	int			num_vertices;
	int			num_edges;
	int			**adj_matrix;
	t_list		*vertices;
}				t_graph;

void			ft_graph_addedge(t_graph *g, int from, int to);
t_graph			*ft_graph_new(void);
t_vertex		*ft_graph_vertexnew(char *name, int x_cord, int y_cord, int num_ants);
void			ft_graph_genmatrices(t_graph *g);
void			ft_graph_genneighbors(t_graph *g);
void			ft_graph_print(t_graph *g);
void			ft_graph_addvertex(t_graph *g, t_vertex *v);
#endif
