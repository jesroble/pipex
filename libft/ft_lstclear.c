/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:07:04 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/18 15:49:51 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*freenode;

	while (*lst != NULL)
	{
		freenode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = freenode;
	}
}

/* int main	(void)
{
	t_list *list = NULL;
	int *content1 =  malloc(sizeof(int));
	int *content2 =  malloc(sizeof(int));
	int *content3 =  malloc(sizeof(int));
	*content1 = 42;
	*content2 = 43;
	*content3 = 6;

	t_list *node1 = ft_lstnew(&content1);
	t_list *node2 = ft_lstnew(&content2);
	t_list *node3 = ft_lstnew(&content3);

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	printf("%d", *(int *)(list->content));
	ft_lstclear(&list, del);
}
 */