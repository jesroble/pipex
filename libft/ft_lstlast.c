/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:05:55 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/17 21:17:56 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}

/* int main	(void)
{
	t_list	*lst = NULL;
	int		content1 = 42;
	int		content2 = 45;
	int		content3 = 1;

	t_list	*node1 = ft_lstnew(&content1);
	t_list	*node2 = ft_lstnew(&content2);
	t_list	*node3 = ft_lstnew(&content3);
	t_list	*last;
	
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);

	last = ft_lstlast(lst);
	printf("%d", *(int *)(last->content));
	free(node1);
	free(node2);
	free(node3);
	return (0);
} */