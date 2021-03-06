/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:52:45 by mdilapi           #+#    #+#             */
/*   Updated: 2018/07/13 11:52:48 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

static long	work(const char *str, int sign)
{
	long	ret;
	char	*tmp;
	size_t	x;

	x = 0;
	ret = 0;
	tmp = (char *)str;
	while (ft_isdigit(*tmp) > 0 && *tmp != '\0')
	{
		ret = ret * 10 + *tmp++ - '0';
		x++;
	}
	if (x > 10 && sign == -1)
		return (0);
	if (x > 10)
		return (-1);
	return (ret * sign);
}

long		ft_atol(const char *str)
{
	char	*tmp;
	int		sign;

	tmp = (char *)str;
	while (*tmp != '\0' && ft_isspace(*tmp) > 0)
		tmp++;
	if (*tmp == '\0')
		return (0);
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
	while (*tmp == '0' && *tmp != '\0')
		tmp++;
	return (work(tmp, sign));
}
