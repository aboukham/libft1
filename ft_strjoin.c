/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:14:56 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/08 17:20:04 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(s = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		s[i] = s1[j++];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i] = s2[j++];
		i++;
	}
	s[i] = 0;
	return (s);
}
