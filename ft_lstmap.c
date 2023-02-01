/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:18:40 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/02/01 00:45:11 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	newlst = malloc(sizeof(t_list));
	newlst = ft_lstnew(lst->content);
	f(newlst->content);
	del(lst->content);
	if (!lst->next)
		return (newlst);
	current = lst->next;
	newlst->next = current;
	ft_lstdelone(lst, del);
	// while (current->next)
	// {
	// 	current = 
	// 	lst = lst->next;
	// }
	return (newlst);
}
