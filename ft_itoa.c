/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:41:11 by cprune            #+#    #+#             */
/*   Updated: 2015/12/11 14:10:24 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*static int	count_nbr(int nbr)
{
	int i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}*/

char		*ft_itoa(int n)
{
	int		x;
	char	*str;
	int		neg;

	neg = (n < 0 ? 1 : 0);
	x = ft_count_nbr(n);
	if (!(str = (char *)malloc(sizeof(char) * (x + neg + 1))))
		return (NULL);
	str += neg + x;
	*str = '\0';
	if (n == 0)
		*--str = '0';
	while (n != 0)
	{
		*--str = (neg ? -1 * (n % 10) + '0' : n % 10 + '0');
		n = n / 10;
	}
	if (neg)
		*--str = '-';
	return (str);
}
