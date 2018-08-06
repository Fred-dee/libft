/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:36:56 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/13 12:36:57 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_list	*ft_stackmax(t_stack *s, int (*cmp)(void *, void *))
{
	t_list *ret;
	t_list *tmp;

	ret = NULL;
	if (s != NULL && s->head != NULL)
	{
		tmp = s->head;
		ret = tmp;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			if (cmp(ret->content, tmp->content) < 0)
				ret = tmp;
		}
	}
	return (ret);
}
