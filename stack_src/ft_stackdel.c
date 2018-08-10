/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:30:14 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/06 07:34:33 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

static void	del_function(void *i, size_t a)
{
	ft_memdel(&i);
	a = 0;
	(void)a;
}

void		ft_stackdel(t_stack *s)
{
	if (s != NULL && s->head != NULL)
	{
		ft_lstdel(&s->head, &del_function);
		s->size = 0;
	}
	free(s);
	s = NULL;
}
