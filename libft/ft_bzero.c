/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 04:25:57 by jesroble          #+#    #+#             */
/*   Updated: 2024/01/05 12:11:58 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <memory.h>
#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return (0);
}

/* int	main(void)
{
	char s[] = "le falta un poco de crotolamo";
	size_t n = 9;

	printf("%s\n", ft_bzero(s, n));
} */