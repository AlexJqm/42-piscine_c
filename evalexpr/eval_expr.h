/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:32:59 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 19:37:22 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <stdlib.h>
# include <unistd.h>

int		ft_operator(char *str, int *i);
int		eval_expr(char *expr);
char	*ft_delete_space(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_detect_op(int nb1, int nb2, char op);
int		ft_detect_paren(char *str, int *i);

#endif
