/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:22:37 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 19:59:13 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_bis;

	i = 0;
	if (!(tab_bis = (int*)malloc(sizeof(*tab_bis) * length)))
		return (0);
	while (i < length)
	{
		tab_bis[i] = f(tab[i]);
		i++;
	}
	return (tab_bis);
}
