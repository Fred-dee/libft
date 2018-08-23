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

void		ft_stackdel(t_stack **s)
{
	t_list *tmp;
	t_list *prev;

	if (s != NULL && *s != NULL && s[0]->head != NULL)
	{
		tmp = s[0]->head;
		while (tmp != NULL)
		{
			prev = tmp;
			tmp = tmp->next;
			ft_memdel((void **)&prev->content);
			ft_memdel((void **)&prev);
		}
	}
	ft_memdel((void **)s);
}
