/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:09:19 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/19 16:31:14 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <memory.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*str;

	if (!dst && !src)
		return (NULL);
	ptr = (unsigned char *) dst;
	str = (const unsigned char *) src;
	while (n-- > 0)
	{
		*ptr++ = *str++;
	}
	return (dst);
}

/* int	main(void)
{
	char dst[] = "\0";
	char src[] = "\0";
	size_t n = 0;

	printf("%s\n", ft_memcpy(dst, src, n));
} */