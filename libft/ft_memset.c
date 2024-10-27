/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:52:32 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/08 17:41:50 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <memory.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	while (len-- > 0)
	{
		*ptr++ = (unsigned char) c;
	}
	return (b);
}

/* int	main(void)
{
	char b[] = "le falta un poco de crotolamo";
	int c = 'w';
	size_t len = 8;

	ft_memset(b, c, len);
	printf("%s\n", b);
} */