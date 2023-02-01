/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:14:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/19 18:42:34 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str_d;
	char	*str_s;
	int		i;

	i = -1;
	str_d = (char *) dest;
	str_s = (char *) src;
	if (n == 0 || (str_d == NULL && str_s == NULL))
		return (dest);
	if (str_d > str_s)
		while (n--)
			str_d[n] = str_s[n];
	else
		while (++i < (int) n)
			str_d[i] = str_s[i];
	return (dest);
}
