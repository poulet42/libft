/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:56:19 by cprune            #+#    #+#             */
/*   Updated: 2015/12/06 10:34:02 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = s1 + ft_strlen(s1);
	ptrsrc = s2;
	while (*ptrsrc && n--)
		*ptrdst++ = *ptrsrc++;
	*ptrdst = '\0';
	return (s1);
}
