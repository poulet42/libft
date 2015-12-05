/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:38:52 by cprune            #+#    #+#             */
/*   Updated: 2015/12/04 09:57:38 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	i = 0;
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (len--)
		str[i++] = s[start++];
	return (str);
}
