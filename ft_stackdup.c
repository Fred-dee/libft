/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:40:12 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/17 11:40:13 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*ft_stackdup(t_stack *s)
{
	t_stack *ret;

	ret = NULL;
	if (s != NULL)
	{
		if((ret = ft_stacknew(NULL, 0)) == NULL)
			return (NULL);
		ret->head = ft_lstdup(&s->head);
		ret->size = s->size;
	}
	return (ret);
}
