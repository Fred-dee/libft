/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:36:40 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/16 10:36:42 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *head, size_t index)
{
	size_t	i;
	t_list	*tmp;

	tmp = NULL;
	if(head != NULL)
	{
		i = 0;
		while (i < index && tmp != NULL)
		{
			i++;
			tmp = tmp->next;
		}
		if(i != index)
			return(NULL);
	}
	return (tmp);
}
