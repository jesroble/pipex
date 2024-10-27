/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:53:55 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/18 16:36:42 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* int main	(void)
{
	t_list	*list = NULL;
	t_list	*tmp;
	char *content1 = "aaa";
	char *content2 = "bbb";
	char *content3 = "ccc";
	char *content4 = "ddd";
	
	t_list *node1 = ft_lstnew(&content1);
	t_list *node2 = ft_lstnew(&content2);
	t_list *node3 = ft_lstnew(&content3);
	t_list *node4 = ft_lstnew(&content4);

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node4);
	
	ft_lstiter(list, f);
	
	tmp = list;
	while (tmp != NULL)
	{
		printf("%c", *(char *)(tmp->content));
		tmp = tmp->next;
	}
	
	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return (0);
} */
