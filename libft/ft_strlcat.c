/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:59:22 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/11 16:40:47 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	td;
	size_t	ts;

	i = 0;
	td = ft_strlen(dst);
	ts = ft_strlen(src);
	if (dstsize <= td)
		return (ts + dstsize);
	while (src[i] != '\0' && td + i < dstsize - 1)
	{
		dst[i + td] = src[i];
		i++;
	}
	dst[i + td] = '\0';
	return (td + ts);
}

/* int	main(void)
{
	char dst[] = "como si fuera ayer, bajo la lluvia,";
	char src[] = "donde se ven los hombres";
	size_t	dstsize;

	dstsize = 0;
	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("%zu", strlcat(dst, src, dstsize));
} */