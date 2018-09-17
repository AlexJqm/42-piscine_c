/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:20:45 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 20:04:28 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		ft_op_type(char *op)
{
	if (op[0] == '+')
		return (0);
	else if (op[0] == '-')
		return (1);
	else if (op[0] == '*')
		return (2);
	else if (op[0] == '/')
		return (3);
	else if (op[0] == '%')
		return (4);
	else if (op[1] != '\0')
		return (-1);
	else
		return (-1);
}

int		do_op(int b, int c, int op)
{
	int (*oprtr[5])(int, int);

	oprtr[0] = &ft_add;
	oprtr[1] = &ft_sous;
	oprtr[2] = &ft_multi;
	oprtr[3] = &ft_div;
	oprtr[4] = &ft_mod;
	return ((*oprtr[op])(b, c));
}

int		main(int argc, char **argv)
{
	int op;

	if (argc != 4)
		return (0);
	op = ft_op_type(argv[2]);
	if (op == -1)
		write(1, "0\n", 2);
	else if (op == 4 && ft_atoi(argv[3]) == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else if (op == 3 && ft_atoi(argv[3]) == 0)
		write(1, "Stop : division by zero\n", 24);
	else
		ft_putnbr(do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), op));
	return (0);
}
