/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:19:32 by cprune            #+#    #+#             */
/*   Updated: 2015/12/07 15:47:32 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = s1 + ft_strlen(s1);
	ptrsrc = s2;
	while (*ptrsrc)
		*ptrdst++ = *ptrsrc++;
	*ptrdst = '\0';
	return (s1);
}
