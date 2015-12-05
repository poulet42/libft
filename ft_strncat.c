/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:56:19 by cprune            #+#    #+#             */
/*   Updated: 2015/11/27 15:56:21 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *ptrdst;
	const char *ptrsrc;

	ptrdst = s1 + strlen(s1);
	ptrsrc = s2;

	while (*ptrsrc && n--)
		*ptrdst++ = *ptrsrc++;
	*ptrdst = '\0';
	return s1;
}
