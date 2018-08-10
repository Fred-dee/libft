/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_clr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:28:08 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/17 13:29:15 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_clr(char const *clr, char const *str)
{
	ft_putstr(clr);
	ft_putstr(str);
	ft_putstr(DEFAULT_FOREGROUND);
}
