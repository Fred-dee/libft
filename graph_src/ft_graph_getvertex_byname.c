/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_getvertex_byname.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:46:03 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/22 15:24:11 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

t_vertex	*ft_graph_getvertex_byname(t_graph *g, char *str)
{
	t_list *tmp;

	if (g != NULL && g->vertices != NULL)
	{
		tmp = g->vertices;
		while (tmp != NULL)
		{
			if (ft_strcmp(str, (char *)((t_vertex *)tmp->content)->name) == 0)
				return (tmp->content);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
