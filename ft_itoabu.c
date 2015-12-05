/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:41:11 by cprune            #+#    #+#             */
/*   Updated: 2015/12/04 09:59:41 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_nbr(int nbr)
{
	int temp;
	int i;

	i = 0;
	temp = nbr;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		x;
	char	*str;
	int		neg;

	neg = (n < 0 ? 1 : 0);
	x = count_nbr(n);
	if (!(str = (char *)malloc(sizeof(char) * (x + neg - 1))))
		return NULL;
	if (n == -2147483648)
		return "-2147483648";
	str[x + neg] = '\0';
	if (neg)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (x + neg > neg)
	{
		str[x  - !neg] = n % 10 + '0';
		n = n / 10;
		x--;
	}
	return (str);
}
