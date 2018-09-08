/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:34:26 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/03 22:34:31 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int b)
{
	int i;

	if (b < 2)
		return (0);
	i = 1;
	while (++i < b / 2 && i <= 46340)
		if (b % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb = nb + 1));
}
