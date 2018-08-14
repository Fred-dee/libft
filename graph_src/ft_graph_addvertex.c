/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_addvertex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:31:20 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 13:31:21 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

void	ft_graph_addvertex(t_graph *g, t_vertex *v)
{
	t_list	*tmp;
	int		i;

	if (g != NULL)
	{
		if (g->vertices == NULL)
		{
			v->number = 0;
			g->vertices = ft_lstnew(v, sizeof(v));
		}
		else
		{
			i = 0;
			tmp = g->vertices;
			while (tmp != NULL)
			{
				tmp = tmp->next;
				i++;
			}
			v->number = i;
			ft_lstaddback(&g->vertices, ft_lstnew(v, sizeof(v)));
		}
		g->num_vertices++;
		g->total_ants++;
	}
}
