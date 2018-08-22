/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:56:10 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 12:56:11 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

t_graph	*ft_graph_new(void)
{
	t_graph	*ret;

	if ((ret = (t_graph *)malloc(sizeof(t_graph))) == NULL)
		return (NULL);
	ret->num_vertices = 0;
	ret->num_edges = 0;
	ret->adj_matrix = NULL;
	ret->vertices = NULL;
	return (ret);
}
