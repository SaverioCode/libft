/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:35 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/31 20:57:31 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*past;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		past = (*lst);
		*lst = (*lst)->next;
		del(past->content);
		free(past);
	}
	*lst = 	NULL;
	return ;
}
