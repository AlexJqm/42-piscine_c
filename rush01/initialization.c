/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omai-lam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:56:11 by omai-lam          #+#    #+#             */
/*   Updated: 2018/09/09 23:07:12 by omai-lam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	init_grid_line(t_case tab[9][9], char *ligne, int i)
{
	int		count;

	count = 0;
	while (count < 9)
	{
		if ((ligne[count] >= '1') && (ligne[count] <= '9'))
		{
			tab[i][count].value = ligne[count];
			tab[i][count].possibilities = 0;
		}
		else
		{
			tab[i][count].value = '0';
			tab[i][count].possibilities = 9;
		}
		tab[i][count].x = i;
		tab[i][count].y = count;
		count++;
	}
}

void	initialization(t_case grid[9][9], char **argv)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		init_grid_line(grid, argv[i + 1], i);
		i++;
	}
}

int		check_error(char *ligne)
{
	int		length;

	length = 0;
	while (ligne[length] != '\0')
	{
		length++;
	}
	if (length == 9)
		return (0);
	else
		return (1);
}

int		check_arg(int argc, char **argv)
{
	int		i;
	int		error;
	int		done;

	i = 0;
	error = 0;
	done = 1;
	if (argc != 10)
		error = 1;
	else
	{
		while (i < 9)
		{
			error = check_error(argv[i + 1]);
			i++;
		}
	}
	return (error);
}
