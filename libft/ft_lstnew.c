/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:21:46 by jesroble          #+#    #+#             */
/*   Updated: 2024/01/26 00:01:16 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

/* int main (void)
{
	t_list	*newnode;
	int		content = 65;

	newnode = ft_lstnew(&content);
	if (!newnode)
	{
		printf("no hay nodo");
		return (1);
	}
	printf("%d", *(int *)(newnode->content));
	free(newnode);
	return (0);
} */
