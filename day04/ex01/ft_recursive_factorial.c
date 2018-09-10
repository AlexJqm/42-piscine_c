/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:16:08 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/03 22:16:13 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	i = 0;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
