/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:20:19 by cprune            #+#    #+#             */
/*   Updated: 2015/12/05 18:25:05 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = dst;
	ptrsrc = src;
	while ((*ptrdst++ = *ptrsrc++))
	{
	}
	*ptrdst = '\0';
	return (dst);
}
