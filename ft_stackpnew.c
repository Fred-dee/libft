/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:30:17 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/09 13:30:18 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackpnew(t_stack *s, void const *content, size_t content_size)
{
	if (s != NULL)
	{
		ft_lstadd(&s->head, ft_lstnew(content, content_size));
		s->size += 1;
	}
}
