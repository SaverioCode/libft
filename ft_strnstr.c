/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:01:53 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/21 04:09:56 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(s2[0]))
		return ((char *)s1);
	while (i < len && s1[i])
	{
		j = 0;
		if (s1[i] == s2[0])
		{
			while (s2[j])
			{
				if (s1[i + j] != s2[j])
					break ;
				j++;
			}
			if (s2[j] == 0 && i + j <= len)
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
