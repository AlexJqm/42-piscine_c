/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omai-lam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:09:37 by omai-lam          #+#    #+#             */
/*   Updated: 2018/09/09 23:06:44 by omai-lam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	check_all(t_case grid[9][9], int i, int j, int n)
{
	int		line;
	int		col;
	int		bloc;

	line = check_line(grid, i, j, n);
	col = check_col(grid, i, j, n);
	bloc = check_bloc(grid, i, j, n);
	if ((line + col + bloc) != 0)
		grid[i][j].possibilities = grid[i][j].possibilities - 1;
}

int		check_line(t_case grid[9][9], int i, int j, int n)
{
	int		n_found;
	int		count;

	n_found = 0;
	count = 0;
	while (count < 9)
	{
		if (count != j)
		{
			if (grid[i][count].value == ('0' + n))
				n_found++;
		}
		count++;
	}
	return (n_found);
}

int		check_col(t_case grid[9][9], int i, int j, int n)
{
	int		n_found;
	int		count;

	n_found = 0;
	count = 0;
	while (count < 9)
	{
		if (count != i)
		{
			if (grid[count][j].value == ('0' + n))
				n_found++;
		}
		count++;
	}
	return (n_found);
}

void	which_bloc(int *bloc_i, int *bloc_j, int i, int j)
{
	if ((i >= 0) && (i <= 2))
		*bloc_i = 0;
	if ((i >= 3) && (i <= 5))
		*bloc_i = 1;
	if ((i >= 6) && (i <= 9))
		*bloc_i = 2;
	if ((j >= 0) && (j <= 2))
		*bloc_j = 0;
	if ((j >= 3) && (j <= 5))
		*bloc_j = 1;
	if ((j >= 6) && (j <= 9))
		*bloc_j = 2;
}

int		check_bloc(t_case grid[9][9], int i, int j, int n)
{
	int		bloc_i;
	int		bloc_j;
	int		n_found;

	n_found = 0;
	which_bloc(&bloc_i, &bloc_j, i, j);
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if ((grid[i + (bloc_i * 3)][j + (bloc_j * 3)]).value == ('0' + n))
				n_found++;
			j++;
		}
		i++;
	}
	return (n_found);
}
