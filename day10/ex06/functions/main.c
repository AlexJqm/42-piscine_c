/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 04:15:08 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/20 15:45:24 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int		nb1;
	int		nb2;
	char	op;

	if (ft_check_error(argc, argv[2]))
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	op = argv[2][0];
	ft_do_op(nb1, nb2, op);
	return (0);
}
