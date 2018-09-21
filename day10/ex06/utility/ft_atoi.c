/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 03:15:40 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/20 15:42:52 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	while (((str[i] <= 13 && str[i] >= 9) || str[i] == 127 || str[i] == 32)
			&& str[i])
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-' || str[i] == '+') && str[i])
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
