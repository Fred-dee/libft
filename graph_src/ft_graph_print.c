/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:28:47 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 13:28:48 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>

void	ft_graph_print(t_graph *g)
{
	int	i;
	int	j;

	if (g != NULL && g->adj_matrix != NULL)
	{
		i = 0;
		while (i < g->num_vertices)
		{
			j = 0;
			while (j < g->num_vertices)
				ft_putnbr(g->adj_matrix[i][j++]);
			ft_putchar('\n');
			i++;
		}
		ft_putchar('\n');
	}
}
