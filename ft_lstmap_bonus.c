/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:08:37 by aaboukha          #+#    #+#             */
/*   Updated: 2019/11/08 17:57:29 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;
	t_list	*begin;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	if (!(newlst = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst))))
		return (NULL);
	newlst = f(lst);
	begin = newlst;
	temp = lst;
	while (temp)
	{
		if (!newlst)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		temp = temp->next;
		newlst->next = f(temp);
		newlst = newlst->next;
	}
	newlst = NULL;
	return (newlst);
}
