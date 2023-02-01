/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:09:11 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/23 18:08:35 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	j = 0;
	slen = 0;
	while (src[slen])
		slen++;
	while (j < size && dst[j])
		j++;
	if (size > slen + j)
		size = slen + j + 1;
	while (j + i < size)
	{
		if (i < slen && j + i < size - 1)
			dst[j + i] = src[i];
		else
			dst[j + i] = 0;
		i++;
	}
	return (j + slen);
}
