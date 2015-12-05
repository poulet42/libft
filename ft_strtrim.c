/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:40:53 by cprune            #+#    #+#             */
/*   Updated: 2015/12/05 18:57:33 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrimspace(int c)
{
	return ((c == ' ' || c == '\n' || c == '\t' ? 1 : 0));
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		y;
	int		j;
	int		n;
	char	*str;

	j = 0;
	i = 0;
	y = 1;
	if (s == NULL)
		return (NULL);
	n = ft_strlen(s);
	while (ft_istrimspace(s[i]) && s[i])
		i++;
	if (i == n)
		return (str = "");
	while (ft_istrimspace(s[n - y]) && y < n)
		y++;
	if (!(str = ft_strnew(sizeof(char) * (n - (--i + --y)))))
		return (NULL);
	while (++i < n - y)
		str[j++] = s[i];
	str[j] = '\0';
	return (str);
}
