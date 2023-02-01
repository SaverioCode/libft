/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:03:55 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/21 04:20:19 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*string_a;
	char	*string_b;
	size_t	i;

	string_a = (char *) dest;
	string_b = (char *) src;
	i = 0;
	if (!(string_a) && !(string_b))
		return (dest);
	while (i < n)
	{
		string_a[i] = string_b[i];
		i++;
	}
	return (dest);
}
