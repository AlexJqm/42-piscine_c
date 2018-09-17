/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:22:23 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 20:04:52 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
int		ft_add(int b, int c);
int		ft_multi(int b, int c);
int		ft_mod(int b, int c);
int		ft_div(int b, int c);
int		ft_sous(int b, int c);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_op_type(char *op);
int		do_op(int b, int c, int op);

#endif
