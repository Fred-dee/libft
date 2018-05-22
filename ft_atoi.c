/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:33:31 by mdilapi           #+#    #+#             */
/*   Updated: 2018/05/21 13:33:33 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	is_space(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	char	*tmp;
	int		ret;
	int		sign;

	tmp = (char *)str;
	while (*tmp != '\0' && is_space(*tmp) == 1)
		tmp++;
	if (*tmp == '\0')
		return (0);
	ret = 0;
	sign = 1;
	if (*tmp == '-')
	{
		sign = -1;
		tmp++;
	}
	else if (*tmp == '+')
		tmp++;
	if (*tmp == '\0' || ft_isdigit(*tmp) == 0)
		return (0);
	while (ft_isdigit(*tmp) > 0 && *tmp != '\0')
		ret = ret * 10 + *tmp++ - '0';
	return (ret * sign);
}
