/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:58:12 by cprune            #+#    #+#             */
/*   Updated: 2015/11/30 13:40:54 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*strdst;
	const char	*strsrc;

	strdst = (char *)dst;
	strsrc = (char *)src;
	while (n > 0)
	{
		*strdst++ = *strsrc++;
		n--;
	}
	return (dst);
}
