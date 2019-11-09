/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:59:04 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/08 16:44:55 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	if (src == dest)
		return (dest);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s1 < s2)
	{
		i = 0;
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
		while (n-- != 0)
			s1[n] = s2[n];
	return ((void *)s1);
}
