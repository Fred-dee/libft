/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:44:08 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/12 10:44:17 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackrotate(t_stack *s)
{
	t_list	*head;
	t_stack	*b;

	if(ft_stackempty(s) == FALSE)
	{
		head = ft_stackpop(s);
		b = ft_stacknew(NULL, 0);
		while(ft_stackempty(s) == FALSE)
			ft_stackpush(b, ft_stackpop(s));
		ft_stackpush(s, head);
		while(ft_stackempty(b) == FALSE)
			ft_stackpush(s, ft_stackpop(b));
	}
}
