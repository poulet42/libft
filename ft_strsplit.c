/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:41:54 by cprune            #+#    #+#             */
/*   Updated: 2015/12/04 10:36:41 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ** ft_strsplit(char const *s, char c)
{
	char **arr;
	int index;
	int i;
	size_t len;
	
	i = 0;
	index = 0;
	len = 0;
	while (*s != '\0')
	{
		while (*s++ != c)
			len++;
		arr[index] = ft_strnew(len); 
		while (len > 0  && len--)
		{
			arr[index][i] = *(s - len + i);
			i++;
		}
		index++;
	}
	return arr;
}
