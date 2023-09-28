/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 11:39:57 by lrichard          #+#    #+#             */
/*   Updated: 2020/09/09 18:08:48 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = 47;
	while (c++ < '7')
	{
		d = c;
		while (d++ < '8')
		{
			u = d;
			while (u++ < '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (!(c == '7' && d == '8' && u == '9'))
					write(1, ", ", 2);
			}
		}
	}
}