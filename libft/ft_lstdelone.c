/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:14:39 by jesroble          #+#    #+#             */
/*   Updated: 2024/01/05 12:38:18 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del(void *content)
{
	free(content);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

/* int main	(void)
{
	t_list	*node;
	int		*content = malloc(sizeof(int));

	*content = 42;
	node = ft_lstnew(&content);

	printf("%d", *(int *)(node->content));
	ft_lstdelone(node, del);
} */