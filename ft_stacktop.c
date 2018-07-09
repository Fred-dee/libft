/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacktop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:29:00 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/09 13:29:00 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_list	*ft_stacktop(t_stack *s)
{
	if (s == NULL || s->head == NULL)
		return (NULL);
	return (s->head);
}
