/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:35:17 by cprune            #+#    #+#             */
/*   Updated: 2015/12/05 18:27:38 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	if (size)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
	}
	if (j > 0)
	{
		dst[i] = '\0';
		return (result + (i - j));
	}
	return (result + i);
}
