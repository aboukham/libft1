/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:33:32 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/07 20:53:01 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (*s == '\0')
	{
		if (c != 0)
			return (NULL);
		else
			return ((char *)s);
	}
	if (c == 0)
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	i = ft_strlen(s) - 1;
	while (s[i] != c && i != 0)
		i--;
	if (i == 0 && s[i] != c)
		return (NULL);
	s = s + i;
	return ((char *)s);
}
