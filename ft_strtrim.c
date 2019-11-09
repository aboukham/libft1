/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:40:29 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/08 17:14:23 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			is_find_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t		strtrim_len(char const *s1, char const *set)
{
	int		i;
	size_t	lenth;
	size_t	j;

	lenth = 0;
	j = ft_strlen(s1);
	i = j - 1;
	while (i >= 0 && is_find_char(set, s1[i]))
	{
		i--;
		lenth++;
	}
	if (lenth != j)
	{
		i = 0;
		while (s1[i] && is_find_char(set, s1[i]))
		{
			i++;
			lenth++;
		}
	}
	return (j - lenth);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s1 || !(str = (char *)malloc(sizeof(char) *
				(strtrim_len(s1, set) + 1))))
		return (NULL);
	if (!strtrim_len(s1, set))
	{
		str[0] = 0;
		return (str);
	}
	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_find_char(set, s1[j]))
		j--;
	k = 0;
	i = 0;
	while (s1[i] && is_find_char(set, s1[i]))
		i++;
	i--;
	while (++i <= j)
		str[k++] = s1[i];
	str[k] = 0;
	return (str);
}
