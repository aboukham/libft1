/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:03:57 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/09 11:33:10 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nelm;

	if (!(nelm = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	nelm->content = content;
	nelm->next = NULL;
	return (nelm);
}
