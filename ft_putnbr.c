/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:41:31 by cprune            #+#    #+#             */
/*   Updated: 2015/12/14 11:32:48 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	tmp;

	if (n < 0 && (tmp = -n))
		ft_putchar('-');
	else
		tmp = n;
	if (tmp > 9)
	{
		ft_putnbr(tmp / 10);
		ft_putnbr(tmp % 10);
	}
	else
		ft_putchar(tmp + '0');
}
