/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrevrotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:44:24 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/12 10:44:40 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	ft_stackrevrotate(t_stack *s)
{
	t_stack *b;
	t_list	*tail;

	if (ft_stackempty(s) == FALSE)
	{
		b = ft_stacknew(NULL, 0);
		while (s->size > 1)
			ft_stackpush(b, ft_stackpop(s));
		tail = ft_stackpop(s);
		while (ft_stackempty(b) == FALSE)
			ft_stackpush(s, ft_stackpop(b));
		ft_stackpush(s, tail);
		ft_stackdel(&b);
	}
}
