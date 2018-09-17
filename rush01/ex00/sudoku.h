/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omai-lam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:02:09 by omai-lam          #+#    #+#             */
/*   Updated: 2018/09/09 23:11:26 by omai-lam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_case
{
	int		x;
	int		y;
	char	value;
	int		possibilities;
}				t_case;

int				check_error(char *ligne);

void			init_grid_line(t_case grid[9][9], char *ligne, int i);

void			show_grid(t_case grid[9][9]);

void			calc_possibilities(t_case grid[9][9]);

void			check_all(t_case grid[9][9], int i, int j, int n);

int				check_line(t_case grid[9][9], int i, int j, int n);

int				check_col(t_case grid[9][9], int i, int j, int n);

int				check_bloc(t_case grid[9][9], int i, int j, int n);

void			show_possib(t_case grid[9][9]);

void			result(t_case grid[9][9]);

void			calc_result(t_case grid[9][9], int i, int j);

void			check_number(t_case grid[9][9], int i, int j, int n);

void			initialization(t_case grid[9][9], char **argv);

void			resolution_on(t_case grid[9][9]);

void			reset_grid(t_case tab[9][9]);

int				check_done(t_case grid[9][9]);

int				check_arg(int argc, char **argv);

#endif
