/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:30:27 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/09 13:30:28 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*ft_stacknew(void const *content, size_t content_size)
{
	t_stack *ret;

	if ((ret = (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	ret->head = ft_lstnew(content, content_size);
	ret->size = 1;
	return (ret);
}
