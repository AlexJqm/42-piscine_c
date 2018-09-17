/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:33:06 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 19:51:28 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int	ft_sp_operator(char *str, int *i)
{
	int		nb1;
	int		nb2;
	char	op_sign;

	nb1 = ft_detect_paren(str, i);
	while (str[*i] == '*' || str[*i] == '/' || str[*i] == '%')
	{
		op_sign = str[(*i)++];
		nb2 = ft_detect_paren(str, i);
		nb1 = ft_detect_op(nb1, nb2, op_sign);
	}
	return (nb1);
}

int	ft_operator(char *str, int *i)
{
	int		nb1;
	int		nb2;
	char	op_sign;

	nb1 = ft_detect_paren(str, i);
	while (str[*i] != '\0' && str[*i] != ')')
	{
		op_sign = str[(*i)++];
		if (op_sign == '+' || op_sign == '-')
			nb2 = ft_sp_operator(str, i);
		else
			nb2 = ft_detect_paren(str, i);
		nb1 = ft_detect_op(nb1, nb2, op_sign);
	}
	return (nb1);
}

int	eval_expr(char *expr)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_delete_space(expr);
	if (!str[0])
		return (0);
	return (ft_operator(str, &i));
}
