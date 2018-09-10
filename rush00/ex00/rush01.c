/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomarcos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:38:36 by jomarcos          #+#    #+#             */
/*   Updated: 2018/09/02 16:32:43 by jomarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	upper(int h)
{
	ft_putchar('/');
	while (h > 2)
	{
		ft_putchar('*');
		h--;
	}
	if (h > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	lower(int h)
{
	ft_putchar('\\');
	while (h > 2)
	{
		ft_putchar('*');
		h--;
	}
	if (h > 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	middle(int v)
{
	ft_putchar('*');
	while (v > 2)
	{
		ft_putchar(' ');
		v--;
	}
	if (v > 1)
	{
		ft_putchar('*');
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
