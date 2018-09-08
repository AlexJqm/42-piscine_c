/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:56:30 by aljacque          #+#    #+#             */
/*   Updated: 2018/08/30 12:14:27 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_fus(int w, int x, int y, int z)
{
	ft_putchar(w + 48);
	ft_putchar(x + 48);
	ft_putchar(' ');
	ft_putchar(y + 48);
	ft_putchar(z + 48);
	if (w == 9 && x == 8)
	{
		return ;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_mod(int d, int g)
{
	int w;
	int x;
	int y;
	int z;

	w = d / 10;
	x = d % 10;
	y = g / 10;
	z = g % 10;
	ft_fus(w, x, y, z);
}

void	ft_print_comb2(void)
{
	int d;
	int g;

	d = 0;
	while (d <= 98)
	{
		g = d + 1;
		while (g <= 99)
		{
			ft_mod(d, g);
			g++;
		}
		d++;
	}
}
