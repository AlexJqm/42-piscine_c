/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_doop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:39:12 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 20:43:30 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_doop.h"
#include "ft_opp.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int		ft_operation(char *op)
{
	int i;
	int j;

	i = 0;
	while (g_opptab[i].ops)
	{
		j = 0;
		while (op[j] && g_opptab[i].ops[j] && (g_opptab[i].ops[j] == op[j]))
		{
			j++;
			if (!op[j])
				return (i);
		}
		i++;
	}
	return (-1);
}

int		ft_calculus(int x, int y, int ops)
{
	return ((*g_opptab[ops].function)(x, y));
}

int		main(int argc, char **argv)
{
	int i;
	int op;

	i = 0;
	if (argc != 4)
		return (0);
	op = ft_operation(argv[2]);
	if (op == -1)
	{
		(*g_opptab[5].function)(0, 0);
		return (0);
	}
	else if (op == 3 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (op == 4 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_calculus(ft_atoi(argv[1]), ft_atoi(argv[3]), op));
	ft_putchar('\n');
	return (0);
}
