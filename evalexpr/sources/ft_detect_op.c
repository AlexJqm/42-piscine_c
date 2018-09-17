/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:58:55 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 19:34:57 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../eval_expr.h"

int	ft_detect_op(int nb1, int nb2, char op)
{
	if (op == '+')
		return (nb1 + nb2);
	else if (op == '-')
		return (nb1 - nb2);
	else if (op == '*')
		return (nb1 * nb2);
	else if (op == '/')
		return (nb1 / nb2);
	else if (op == '%')
		return (nb1 % nb2);
	else
		return (0);
}
