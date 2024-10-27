/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:52:21 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/15 22:20:23 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	f(unsigned int c, char *s)
{
	if (*s >= 'a' && *s <= 'z')
		*s = (char) ft_toupper(*s);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	c;

	c = 0;
	if (!s || !f)
		return ;
	while (s[c] != '\0')
	{
		f(c, &s[c]);
		c++;
	}
}

/* int main	(void)
{
	char	s[] = "hola mundo";

	ft_striteri(s, f);
	printf("%s", s);
	return (0);
} */