/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:12:25 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/30 19:12:55 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*i;
	int		n;

	i = NULL;
	n = 0;
	while (s[n])
	{
		if (s[n] == (char) c)
			i = (char *) &s[n];
		n++;
	}
	if ((char) c == '\0')
		return ((char *) &s[n]);
	return (i);
}

/* int	main(void)
{
	char s[] = "fakin bukpies";
	int c = 'k';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
} */