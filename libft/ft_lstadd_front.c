/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:05:21 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/17 21:52:50 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* int main	(void)
{
	t_list *list = NULL;
	int content1 = 42;
	int content2 = 43;

	t_list *node1 = ft_lstnew(&content1);
	t_list *node2 = ft_lstnew(&content2);
	if (!node1 || !node2)
	{
		printf("Failed to create new nodes\n");
		return (1);
	}
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	t_list *current = list;
	while (current != NULL)
	{
		printf("%d\n", *(int *)(current->content));
		current = current->next;
	}
	free(node1);
	free(node2);
} */