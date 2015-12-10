/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 15:23:20 by cprune            #+#    #+#             */
/*   Updated: 2015/12/07 15:23:22 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *curr;
	t_list *tmp;

	curr = *alst;
	while (curr != NULL)
	{
		tmp = curr->next;
		ft_lstdelone(&curr, del);
		curr = tmp;
	}
	*alst = NULL;
}
