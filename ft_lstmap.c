/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:18:40 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/02/01 20:31:49 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	if (!lst || !f || !del || !(lst->content))
		return (NULL);
	current = ft_lstnew(f(lst->content));
	head = current;
	if (!(lst->next))
		return (current);
	while (lst->next)
	{
		lst = lst->next;
		if (!(lst->content))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		current->next = ft_lstnew(f(lst->content));
		current = current->next;
	}
	current->next = NULL;
	return (head);
}
