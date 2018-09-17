/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:40:03 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 20:50:39 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_calculus(int x, int y, int op);
int		ft_atoi(char *str);
int		ft_add(int x, int y);
int		ft_sub(int x, int y);
int		ft_mul(int x, int y);
int		ft_div(int x, int y);
int		ft_mod(int x, int y);
int		ft_usage(int x, int y);

typedef	struct	s_opp
{
	char	*ops;
	int		(*function)(int, int);
}				t_opp;

#endif
