/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:49:03 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/17 18:54:59 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 0;
	while (lst != NULL)
	{
		c++;
		lst = lst->next;
	}
	return (c);
}

/* int main	(void)
{
	t_list	*list = NULL;
	int content1 = 42;
	int content2 = 45;
	int content3 = 0;
	int content4 = 2;
	int size;
	t_list *node1 = ft_lstnew(&content1);
	t_list *node2 = ft_lstnew(&content2);
	t_list *node3 = ft_lstnew(&content3);
	t_list *node4 = ft_lstnew(&content4);

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node4);

	size = ft_lstsize(list);
	printf("%d", size);
	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return (0);
} */