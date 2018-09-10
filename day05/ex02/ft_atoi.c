/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:08:40 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/09 21:10:43 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32 || *str == 127)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			j = -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - 48);
		str++;
	}
	return (i * j);
}

int        main(void)
{
	printf("%d\n", ft_atoi("-45a6"));
	printf("%d", atoi("-45a6"));
	return (0);
}
