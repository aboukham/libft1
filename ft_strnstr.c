/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:26:24 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/08 16:52:29 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str;
	size_t	j;

	if (s2[0] == 0)
		return ((char *)s1);
	j = ft_strlen(s2);
	if (s1 == 0 && n == 0)
		return (NULL);
	str = (char *)s1;
	i = 0;
	while (i < n && str[i])
	{
		if (str[i] == s2[0] && i + j <= n)
			if (!ft_strncmp(((const char *)str + i), s2, j))
				return (str + i);
		i++;
	}
	return (NULL);
}
