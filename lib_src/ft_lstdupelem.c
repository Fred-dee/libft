/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdupelem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:27:39 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/17 11:27:41 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstdupelem(t_list *elem)
{
	t_list	*ret;

	if (elem == NULL)
		return (NULL);
	if ((ret = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	ret->content = ft_memalloc(elem->content_size);
	ft_memmove(ret->content, elem->content, elem->content_size);
	ret->content_size = elem->content_size;
	ret->next = NULL;
	return (ret);
}
