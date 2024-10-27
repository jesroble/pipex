/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:09:33 by jesroble          #+#    #+#             */
/*   Updated: 2024/01/20 16:45:28 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char s[] = "fakin burpies";
	int c = 'b';
	size_t n = 7;

	printf("%s", (char *)ft_memchr(s, c, n));
} */