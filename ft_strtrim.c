/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:29:35 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/27 20:37:16 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s1len;
	size_t	start;
	size_t	end;
	size_t	setlen;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	start = 0;
	end = 0;
	setlen = ft_strlen(set);
	while (ft_memchr(set, s1[start], setlen))
		start++;
	if (s1len - start == 0)
		return ((char *)ft_calloc(1, 1));
	while (ft_memchr(set, s1[s1len - end - 1], setlen))
		end++;
	str = ft_substr(s1, start, s1len - start - end);
	return (str);
}
