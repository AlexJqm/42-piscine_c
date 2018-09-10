/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:18:45 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/03 22:18:51 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int j;

	i = 1;
	j = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * j;
		i++;
	}
	return (nb);
}
