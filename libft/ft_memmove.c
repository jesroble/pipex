/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:46:56 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/19 16:32:57 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <memory.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	if (!dst && !src)
		return (NULL);
	ptrdst = (unsigned char *) dst;
	ptrsrc = (unsigned char *) src;
	if (src < dst)
	{
		ptrsrc += len;
		ptrdst += len;
		while (len-- > 0)
		{
			*--ptrdst = *--ptrsrc;
		}
	}
	else
	{
		while (len-- > 0)
		{
			*ptrdst++ = *ptrsrc++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char dst[] = "feifijsfjsfjddeddfdkodknfse";
	char src[] = "euhfhuehfhushufdsfjiodfsfes";
	size_t len = 28;

	printf("%p\n", ft_memmove(dst, src, len));
	printf("%p\n", memmove(dst, src, len));
} */