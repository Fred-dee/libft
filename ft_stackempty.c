/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:29:26 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/09 13:29:27 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		ft_stackempty(t_stack *s)
{
	if (s == NULL)
		return (-1);
	if (s->head == NULL)
		return (TRUE);
	return (FALSE);
}
