/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:05 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/28 14:56:17 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mini_atoi(int n, int fd)
{
	char	revstr[12];
	char	str[12];
	int		slen;
	int		num;
	int		i;

	i = -1;
	num = n;
	if (n < 0)
		num = -num;
	while (num > 0)
	{
		revstr[++i] = (num % 10) + 48;
		num = (num - (num % 10)) / 10;
	}
	if (n < 0)
		revstr[++i] = '-';
	revstr[++i] = 0;
	slen = ft_strlen(revstr);
	i = -1;
	while (++i < slen)
		str[i] = revstr[slen - i - 1];
	str[i] = 0;
	write(fd, str, ft_strlen(str));
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n != 0 && n != -2147483648)
	{
		mini_atoi(n, fd);
		return ;
	}
	if (n == 0)
		write(fd, "0", 1);
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	return ;
}
