/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_getvertex_byid.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:45:48 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/22 15:22:46 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

t_vertex	*ft_graph_getvertex_byid(t_graph *g, int id)
{
	t_list	*tmp;

	if (g != NULL && g->vertices != NULL)
	{
		tmp = g->vertices;
		while (tmp != NULL)
		{
			if (id == ((t_vertex *)tmp->content)->number)
				return ((t_vertex *)tmp->content);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
