/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:33:08 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 19:39:32 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../eval_expr.h"

char	*ft_delete_space(char *str)
{
	int		i;
	int		j;
	char	*tab;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			size++;
		i++;
	}
	tab = (char *)malloc(sizeof(char) * size);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			tab[j++] = str[i];
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
