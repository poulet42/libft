/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:39:36 by cprune            #+#    #+#             */
/*   Updated: 2015/12/04 09:58:43 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>/**/
char * ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1len;
   	int		s2len;
	int		i;

	i = 0;
	if(!(str = ft_strnew(sizeof(char) * (strlen(s1) + strlen(s2)))))
		return (NULL);
	while (*s1 != '\0')
	{
		str[i++] = *s1++;
	}
	while (*s2 != '\0')
	{
		str[i++] = *s2++;
	}
	str[i] = '\0';
	return (str);
}
