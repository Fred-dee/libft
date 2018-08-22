/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_vertexnew.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:56:47 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 12:56:49 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

t_vertex	*ft_graph_vertexnew(char *name, int x_cord,
	int y_cord, int num_ants)
{
	t_vertex	*ret;

	if ((ret = (t_vertex *)malloc(sizeof(t_vertex))) == NULL)
		return (NULL);
	ret->name = ft_strdup(name);
	ret->number = 0;
	ret->neighbours = NULL;
	ret->num_ants = num_ants;
	ret->x_cord = x_cord;
	ret->y_cord = y_cord;
	return (ret);
}
