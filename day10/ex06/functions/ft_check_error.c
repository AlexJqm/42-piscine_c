/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 03:20:41 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/20 15:45:14 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_check_error(int ac, char *av2)
{
	int i;

	i = 0;
	if (ac != 4)
		return (1);
	while (av2[i])
		i++;
	if (i > 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (1);
	}
	if (av2[0] != '+' && av2[0] != '-' && av2[0] != '*'
		&& av2[0] != '/' && av2[0] != '%')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (1);
	}
	return (0);
}
