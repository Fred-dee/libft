/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_genmatrices.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:57:27 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 12:57:28 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

int	ft_graph_genmatrices(t_graph *g)
{
	int	i;
	int	j;


	if (g != NULL)
	{
		if((g->adj_matrix = (int **)malloc(sizeof(int *) * g->num_vertices)) == NULL)
			return (FALSE);
		i = 0;
		j = 0;
		while (i < g->num_vertices)
		{
			if ((g->adj_matrix[i] = (int *)malloc(sizeof(int) * g->num_vertices)) == NULL)
				return (FALSE);
			j = 0;
			while (j < g->num_vertices)
				g->adj_matrix[i][j++] = 0;
			i++;
		}
	}
	return (TRUE);
}
