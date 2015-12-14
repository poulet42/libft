/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:40:53 by cprune            #+#    #+#             */
/*   Updated: 2015/12/14 14:00:18 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_istrimspace(int c)
{
	return ((c == ' ' || c == '\n' || c == '\t' ? 1 : 0));
}

char		*ft_strtrim(char const *s)
{
	int len;
	int cmpe;
	char *str;

	cmpe = 0;
	while (ft_istrimspace(*s))
		s++;
	if (*s == '\0')
		return ("");
	len = strlen(s);
	s = s + len;
	while (ft_istrimspace(*--s))
		cmpe++;
	if(!(str = (char *)malloc(sizeof(char) * (len - cmpe + 1))))
		return (NULL);
	str[len - cmpe] = '\0';
	while (len - cmpe - 1 >= 0)
	{
		str[len - cmpe - 1] = *s--;
		len--;
	}
	return (str);
}
