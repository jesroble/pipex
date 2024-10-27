/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:10:51 by jesroble          #+#    #+#             */
/*   Updated: 2024/01/20 19:14:57 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	n = 0;
	h = 0;
	if (needle[n] == '\0')
		return ((char *) haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h] == needle[n] && haystack[h] != '\0' && h < len)
		{
			n++;
			h++;
		}
		if (needle[n] == '\0')
			return ((char *) &haystack[h - n]);
		h = (h - n) + 1;
	}
	return (NULL);
}

/* int	main(void)
{
	char	haystack[] = "gfdsgf";
	char	needle[] = "ds";
	size_t	len = 5;

	printf("Using ft_strnstr: %p\n", ft_strnstr(haystack, needle, len));

	printf("Using strnstr: %p\n", strnstr(haystack, needle, len));
} */