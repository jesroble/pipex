/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:37:29 by jesroble          #+#    #+#             */
/*   Updated: 2024/01/05 12:49:32 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	is_lowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	is_uppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	if (!(is_lowercase(c) || is_uppercase(c)))
		return (0);
	return (1);
}

/* int	main(void)
{
	char	c = '#';
	int n;

	n = ft_isalpha(c);
	printf("%d", ft_isalpha(c));
} */