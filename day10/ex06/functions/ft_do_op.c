/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 03:15:14 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/20 14:34:07 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(int nb1, int nb2, char op)
{
	char	op_tab[5];
	void	(*f[5])(int, int);
	int		i;

	op_tab[0] = '+';
	op_tab[1] = '-';
	op_tab[2] = '*';
	op_tab[3] = '/';
	op_tab[4] = '%';
	f[0] = &ft_plus;
	f[1] = &ft_minus;
	f[2] = &ft_mult;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	i = 0;
	while (op != op_tab[i])
		i++;
	f[i](nb1, nb2);
	ft_putchar('\n');
}
