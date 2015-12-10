/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:25:23 by cprune            #+#    #+#             */
/*   Updated: 2015/12/05 18:31:18 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*strdst;
	const char	*strsrc;

	strdst = (char *)dst;
	strsrc = (char *)src;
	if (strsrc <= strdst)
	{
		strdst += len - 1;
		strsrc += len - 1;
		while (len--)
			*strdst-- = *strsrc--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
