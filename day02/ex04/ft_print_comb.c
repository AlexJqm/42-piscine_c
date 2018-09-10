/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:57:01 by aljacque          #+#    #+#             */
/*   Updated: 2018/08/30 13:31:33 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_call(int c, int d, int u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if (c != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_print_call(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
