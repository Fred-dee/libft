/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:41:43 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/22 15:43:11 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_lstsize(t_list **alst)
{
	t_list	*tmp;
	size_t	ret;

	ret = 0;
	if (alst != NULL)
	{
		tmp = *alst;
		while (tmp != NULL)
		{
			ret++;
			tmp = tmp->next;
		}
	}
	return (ret);
}
