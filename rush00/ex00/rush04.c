/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomarcos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:38:36 by jomarcos          #+#    #+#             */
/*   Updated: 2018/09/02 16:35:10 by jomarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	upper(int h)
{
	ft_putchar('A');
	while (h > 2)
	{
		ft_putchar('B');
		h--;
	}
	if (h > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	lower(int h)
{
	ft_putchar('C');
	while (h > 2)
	{
		ft_putchar('B');
		h--;
	}
	if (h > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle(int v)
{
	ft_putchar('B');
	while (v > 2)
	{
		ft_putchar(' ');
		v--;
	}
	if (v > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	if (a <= 0 || b <= 0)
		return ;
	upper(a);
	while (b > 2)
	{
		middle(a);
		b--;
	}
	if (b > 1)
	{
		lower(a);
	}
}
