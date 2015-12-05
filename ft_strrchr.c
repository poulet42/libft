/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:11:43 by cprune            #+#    #+#             */
/*   Updated: 2015/11/30 14:26:13 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *ptr;
	ptr =  s + strlen(s) + 1; 
	while (ptr-- > s)
	{
		if ((char)c == *ptr)
			return (char *)ptr;
	}
	return 0;
}
