/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:39:54 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/18 17:14:00 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = ft_lstnew(f(lst->content));
	if (current == NULL)
		return (NULL);
	newnode = current;
	lst = lst->next;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (current == NULL)
		{
			ft_lstclear(&newnode, del);
			return (NULL);
		}
		ft_lstadd_back(&newnode, current);
		lst = lst->next;
	}
	return (newnode);
}
