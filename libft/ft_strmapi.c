/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesroble <jesroble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:38:27 by jesroble          #+#    #+#             */
/*   Updated: 2023/12/18 16:27:39 by jesroble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	f(unsigned int c, char s)
{
	if (s >= 'a' && s <= 'z')
		return ((char) ft_toupper(s));
	else
		return (s);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapi;
	unsigned int	c;

	c = 0;
	if (!s || !f)
		return (NULL);
	mapi = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mapi)
		return (NULL);
	while (s[c] != '\0')
	{
		mapi[c] = f(c, s[c]);
		c++;
	}
	mapi[c] = '\0';
	return (mapi);
}

/* int main	(void)
{
	char	s[] = "hola mundo";
	char	*mapi = ft_strmapi(s, f);

	printf("%s", mapi);
	free(mapi);
	return (0);
} */