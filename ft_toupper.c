/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:51:21 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/01/18 18:57:06 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	upper_c;

	if (c > 96 && c < 123)
	{
		upper_c = c - 32;
		return (upper_c);
	}
	else
		return (c);
}
