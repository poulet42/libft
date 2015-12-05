/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:35:17 by cprune            #+#    #+#             */
/*   Updated: 2015/12/04 10:03:03 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	size_t tempsize;

	tempsize = size;
	i = 0;
	while (*dst && tempsize > 0 && tempsize--)
		dst++;
	while (*src && tempsize > 1 && tempsize--)
		*dst++ = *src++;
	if (tempsize == 1)
		*dst = '\0';
	return (size - tempsize);
}
