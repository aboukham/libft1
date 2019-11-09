/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:20:29 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/08 16:50:41 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen >= size)
		slen += size;
	else
		slen += dlen;
	i = 0;
	while (dlen < size - 1 && src[i])
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	if (size > dlen)
		dst[dlen] = '\0';
	return (slen);
}
