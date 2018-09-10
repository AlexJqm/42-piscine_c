/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omai-lam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:59:03 by omai-lam          #+#    #+#             */
/*   Updated: 2018/09/09 23:07:56 by omai-lam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	reset_grid(t_case tab[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j].possibilities != 0)
				tab[i][j].possibilities = 9;
			j++;
		}
		i++;
	}
}

void	calc_possibilities(t_case grid[9][9])
{
	int		i;
	int		j;
	int		n;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			n = 1;
			while (n <= 9)
			{
				if (grid[i][j].value == '0')
				{
					check_all(grid, i, j, n);
				}
				n++;
			}
			j++;
		}
		i++;
	}
}

void	calc_result(t_case grid[9][9], int i, int j)
{
	int		n;

	n = 1;
	while (n <= 9)
	{
		check_number(grid, i, j, n);
		n++;
	}
}

void	result(t_case grid[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j].possibilities == 1)
				calc_result(grid, i, j);
			j++;
		}
		i++;
	}
}

void	resolution_on(t_case grid[9][9])
{
	calc_possibilities(grid);
	show_grid(grid);
	write(1, "\n Possibilities : \n", 21);
	show_possib(grid);
	write(1, "\n", 2);
	result(grid);
	write(1, "\n New grid : \n", 16);
	show_grid(grid);
	reset_grid(grid);
	write(1, "\n", 2);
}
