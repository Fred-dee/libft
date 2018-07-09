/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:29:52 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/09 13:29:54 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackpush(t_stack *s, t_list *elem)
{
	t_list *tmp;

	if (s != NULL)
	{
		tmp = s->head;
		ft_lstadd(&tmp, elem);
		s->size += 1;
	}
}
