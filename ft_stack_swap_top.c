/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap_top.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:39:31 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/12 10:39:42 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void			ft_stack_swap_top(t_stack *s)
{
	t_list	*first;
	t_list	*second;

	if (s != NULL && s->size > 1)
	{
		first = ft_stackpop(s);
		second = ft_stackpop(s);
		ft_stackpush(s, first);
		ft_stackpush(s, second);
	}
}
