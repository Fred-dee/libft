/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:28:26 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/17 11:28:28 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstdup(t_list **alst)
{
	t_list	*head;
	t_list	*tmp;
	t_list	*atmp;

	head = NULL;
	if (alst != NULL && *alst != NULL)
	{
		atmp = *alst;
		head = ft_lstdupelem(atmp);
		tmp = head;
		atmp = atmp->next;
		while (atmp != NULL)
		{
			tmp->next = ft_lstdupelem(atmp);
			tmp = tmp->next;
			atmp = atmp->next;
		}
	}
	return (head);
}
