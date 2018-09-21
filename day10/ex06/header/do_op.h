/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 03:30:02 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/20 15:50:41 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_do_op(int nb1, int nb2, char op);
void	ft_plus(int a, int b);
void	ft_minus(int a, int b);
void	ft_mult(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
int		ft_check_error(int ac, char *av2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

#endif
