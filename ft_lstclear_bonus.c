/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:26:33 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/08 17:43:35 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = tmp->next;
		if (tmp->content && del)
			del(tmp->content);
		free(tmp);
	}
	lst = NULL;
}
