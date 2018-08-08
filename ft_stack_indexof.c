/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_indexof.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 08:55:54 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/08 08:56:14 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	ft_stack_indexof(t_stack *s, t_list *elem)
{
	int		count;
	t_list	*tmp;

	count = 0;
	if (s != NULL && s->head != NULL)
	{
		tmp = s->head;
		while (tmp != NULL)
		{
			if (ft_memcmp(tmp->content, elem->content, elem->content_size) == 0)
				return (count);
			count++;
			tmp = tmp->next;
		}
	}
	return (-1);
}
