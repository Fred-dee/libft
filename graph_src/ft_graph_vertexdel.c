/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_vertexdel.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:46:26 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/22 15:26:12 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

void	ft_graph_vertexdel(t_vertex **v)
{
	t_list	*tmp;
	t_list	*prev;

	if (v != NULL && *v != NULL)
	{
		if (v[0]->name != NULL)
			ft_strdel(&v[0]->name);
		if (v[0]->neighbours != NULL)
		{
			tmp = v[0]->neighbours;
			while (tmp != NULL)
			{
				prev = tmp;
				tmp = tmp->next;
				if (prev->content != NULL)
					ft_memdel(&prev->content);
				ft_memdel((void **)&prev);
			}
		}
		ft_memdel((void **)v);
	}
}
