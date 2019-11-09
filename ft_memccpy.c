/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:12:36 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/07 16:05:37 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;
	size_t			j;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	while (i < n && s2[i] != (unsigned char)c)
	{
		s1[i] = s2[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
		s1[i] = s2[i];
	j = 0;
	while (++j <= i + 1)
		s1++;
	return ((void *)s1);
}
