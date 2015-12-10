/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:44:23 by cprune            #+#    #+#             */
/*   Updated: 2015/12/08 11:22:51 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int result;
	int i;
	int signe;

	result = 0;
	signe = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	i = (str[i] == '-' || str[i] == '+' ? i + 1 : i);
	if (str[i - 1] == '-')
		signe = -1;
	while (str[i] && ft_isdigit(str[i]))
	{
		result *= 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result * signe);
}
