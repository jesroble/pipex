/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:07:18 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/18 16:10:24 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}

/* int main	(void)
{
	t_list	*lst = NULL;
	int		content1 = 42;
	int		content2 = 45;
	int		content3 = 1;
	int		content4 = 8;

	t_list	*node1 = ft_lstnew(&content1);
	t_list	*node2 = ft_lstnew(&content2);
	t_list	*node3 = ft_lstnew(&content3);
	t_list	*new = ft_lstnew(&content4);
	t_list	*last;
	
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);
	ft_lstadd_back(&lst, new);

	last = ft_lstlast(lst);
	printf("%d", *(int *)(last->content));
	free(node1);
	free(node2);
	free(node3);
	free(new);
	return (0);
} */