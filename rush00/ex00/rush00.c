/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomarcos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:32:28 by jomarcos          #+#    #+#             */
/*   Updated: 2018/09/02 16:30:10 by jomarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	upperlower(int h)
{
	ft_putchar('o');
	while (h > 2)
	{
		ft_putchar('-');
		h--;
	}
	if (h > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	middle(int v)
{
	ft_putchar('|');
	while (v > 2)
	{
		ft_putchar(' ');
		v--;
	}
	if (v > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	if (a <= 0 || b <= 0)
		return ;
	upperlower(a);
	while (b > 2)
	{
		middle(a);
		b--;
	}
	if (b > 1)
	{
		upperlower(a);
	}
}
