/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 16:04:20 by cprune            #+#    #+#             */
/*   Updated: 2015/12/07 15:27:38 by cprune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_fresh;
	t_list *end_new;

	new_fresh = f(lst);
	end_new = new_fresh;
	while (lst->next)
	{
		lst = lst->next;
		end_new->next = f(lst);
		end_new = end_new->next;
	}
	return (new_fresh);
}
