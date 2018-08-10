/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_clr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 07:40:02 by mdilapi           #+#    #+#             */
/*   Updated: 2018/08/06 07:40:06 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	recursive(int n)
{
	if (ABS(n) > 9 || ABS(n) < 0)
		recursive(n / 10);
	ft_putchar(ABS(ABS(n) % 10) + '0');
}

void		ft_putnbr_clr(char const *clr, int n)
{
	ft_putstr(clr);
	if (n < 0)
		ft_putchar('-');
	recursive(n);
	ft_putstr(DEFAULT_FOREGROUND);
}
