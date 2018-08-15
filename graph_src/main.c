/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:51:32 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/14 14:51:33 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <graph.h>
#include <stdio.h>

int main(void)
{
	t_graph 	*g;
	t_vertex	*tmp;
	t_list		*iter;
	t_vertex	*rand;

	g = ft_graph_new();
	rand = ft_graph_vertexnew("a", 0, 0, 5);
	ft_graph_addvertex(g, rand);
	ft_graph_addvertex(g, ft_graph_vertexnew("b", 0, 2, 0));
	ft_graph_addvertex(g, ft_graph_vertexnew("c", 0, 3, 0));
	ft_graph_addvertex(g, ft_graph_vertexnew("d", 0, 5, 0));
	//ft_graph_genmatrices(g);
	//ft_graph_print(g);
	//printf("\n");
 	printf("%p\n",rand->neighbours);
	ft_graph_addedge(g, 0, 2);
	ft_graph_addedge(g, 0, 1);
	ft_graph_genmatrices(g);
	ft_graph_print(g);
	tmp = ft_graph_getvertex_byname(g, "a");
	if (tmp != NULL)
	{
		printf("I got vertex: %s\n",tmp->name);
		iter = tmp->neighbours;
		if (iter != NULL)
		{
			while (iter != NULL)
			{
				printf("%s is adjacent to: %d\n", tmp->name, *(int *)iter->content);
				iter = iter->next;
			}
		}
		else
			printf("There were no neighbours\n");
	}
	else
		printf("get vertex returned null\n");
	return (0);
}
