/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:11:43 by cprune            #+#    #+#             */
/*   Updated: 2015/12/05 18:51:45 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ptr;

	ptr = s + strlen(s) + 1;
	while (ptr-- > s)
	{
		if ((char)c == *ptr)
			return ((char *)ptr);
	}
	return (0);
}
