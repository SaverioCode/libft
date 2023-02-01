/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:21:37 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/30 18:36:42 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	str_bytes(char const *s, char c)
{
	int	i;
	int	b;

	i = -1;
	b = 1;
	if (s[0] != c)
		b++;
	while (s[++i])
		if ((s[i] == c && s[i + 1] != c && s[i + 1] != 0))
			b++;
	return (b);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	int				i;
	unsigned int	j;
	unsigned int	strlen;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	strlen = 0;
	arr = ft_calloc(str_bytes(s, c), sizeof(arr));
	if (!arr)
		return (NULL);
	while (j < ft_strlen(s) + 1)
	{
		if (s[j] != c && s[j] != 0)
			strlen++;
		if ((s[j] == c || s[j] == 0) && strlen > 0)
		{
			arr[++i] = ft_substr(s, (j - strlen), strlen);
			strlen = 0;
		}
		j++;
	}
	return (arr);
}
