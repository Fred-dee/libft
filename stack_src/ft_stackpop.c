/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:30:06 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/09 13:30:07 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_list	*ft_stackpop(t_stack *s)
{
	t_list	*tmp;

	tmp = NULL;
	if (s != NULL)
	{
		tmp = s->head;
		if (s->head != NULL)
		{
			s->head = tmp->next;
			s->size -= 1;
		}
	}
	return (tmp);
}
