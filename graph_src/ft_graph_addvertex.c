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
#include <stdio.h>

void	ft_graph_addvertex(t_graph *g, t_vertex *v)
{
	t_list	*tmp;
	t_list	*atmpt;
	int		i;

	if (g != NULL && v != NULL)
	{
		if (g->vertices == NULL)
		{
			v->number = 0;
			ft_lstadd(&g->vertices, ft_lstnew(v, sizeof(t_vertex)));
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
			ft_lstaddback(&g->vertices, ft_lstnew(v, sizeof(t_vertex)));
			atmpt = ft_lstgettail(g->vertices);
			((t_vertex *)atmpt->content)->number = i;
		}
		g->num_vertices++;
		free(v);
		atmpt = NULL;
	}
}
