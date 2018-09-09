/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omai-lam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:00:04 by omai-lam          #+#    #+#             */
/*   Updated: 2018/09/09 23:08:33 by omai-lam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	show_grid(t_case grid[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, grid[i][j].value, 1);
			j++;
		}
		write(1, "\n", 2);
		i++;
	}
}

void	show_possib(t_case grid[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, (grid[i][j].possibilities + '0'), 1);
			j++;
		}
		write(1, "\n", 2);
		i++;
	}
}

int		check_done(t_case grid[9][9])
{
	int		i;
	int		j;
	int		done;

	i = 0;
	done = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j].value == '0')
			{
				done++;
			}
			j++;
		}
		i++;
	}
	return (done);
}

void	check_number(t_case grid[9][9], int i, int j, int n)
{
	int		line;
	int		col;
	int		bloc;

	line = 0;
	col = 0;
	bloc = 0;
	line = check_line(grid, i, j, n);
	col = check_col(grid, i, j, n);
	bloc = check_bloc(grid, i, j, n);
	if ((line == 0) && (col == 0) && (bloc == 0))
	{
		grid[i][j].value = ('0' + n);
		grid[i][j].possibilities = 0;
	}
}
