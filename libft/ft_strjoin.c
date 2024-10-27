/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:04:48 by jesroble          #+#    #+#             */
/*   Updated: 2024/06/09 17:58:54 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			c;
	int			i;
	char		*s3;

	c = 0;
	i = 0;
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[c] != '\0')
	{
		s3[c] = s1[c];
		c++;
	}
	while (s2[i] != '\0')
	{
		s3[c] = s2[i];
		c++;
		i++;
	}
	s3[c] = '\0';
	return (s3);
}

/* int	main(void)
{
	char	*s1 = "el que saca la psitola es pa usarla";
	char	*s2 = "el que la saca pa enseñarla es parguela";
	char	*s3 = ft_strjoin(s1, s2);

	printf("%s", s3);
	free(s3);
} */