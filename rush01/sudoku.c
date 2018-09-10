/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omai-lam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:00:56 by omai-lam          #+#    #+#             */
/*   Updated: 2018/09/09 23:12:21 by omai-lam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char *argv[])
{
	t_case	grid[9][9];
	int		error;
	int		done;

	error = check_arg(argc, argv);
	done = 1;
	if (error == 1)
	{
		write(1, "Error \n", 8);
	}
	else
	{
		initialization(grid, argv);
		while (done != 0)
		{
			done = check_done(grid);
			resolution_on(grid);
		}
	}
	return (0);
}
