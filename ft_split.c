/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:02:23 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/06 19:06:37 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nb_words(char const *s, char c)
{
	int	nb;

	nb = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == 0)
			break ;
		while (*s && *s != c)
			s++;
		nb++;
	}
	return (nb);
}

static	char	*ft_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_nb_words(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			tab[i] = ft_word(s, c);
			if (!tab[i])
			{
				free(tab);
				return (NULL);
			}
			s = s + ft_strlen(tab[i++]);
		}
	}
	tab[i] = NULL;
	return (tab);
}
