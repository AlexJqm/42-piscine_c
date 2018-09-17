/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_paren.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:05:43 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 19:39:10 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../eval_expr.h"

int	ft_detect_paren(char *str, int *i)
{
	int back;
	int sign;

	back = 0;
	sign = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -1;
		*i += 1;
	}
	if (str[*i] == '(')
	{
		*i += 1;
		back = ft_operator(str, i);
		*i += 1;
		return (sign * back);
	}
	while ('0' <= str[*i] && str[*i] <= '9')
	{
		back = (back * 10) + str[(*i)++] - '0';
	}
	return (sign * back);
}
