/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:59:01 by cprune            #+#    #+#             */
/*   Updated: 2015/11/30 17:38:10 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t s2len;

	s2len = strlen(s2);
	if (!*s2)
		return (char *)s1;
	while(*s1)
	{
		if(!ft_memcmp(s1, s2, s2len))
			return (char *)s1;
		s1++;
	}
	return NULL;
}
