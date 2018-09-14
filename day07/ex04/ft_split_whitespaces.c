/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 23:41:01 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/12 21:29:33 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define POS (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
#define NEG (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')

int		ft_count_words(char *str)
{
	int i;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (str[i] != '\0')
	{
		while ((POS)
		&& (str[i] != '\0'))
			i++;
		if (str[i] != '\0' && NEG)
		{
			nb_words++;
			i++;
		}
		while (str[i] != '\0' && NEG)
			i++;
	}
	return (nb_words);
}

int		ft_strlenbis(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && NEG)
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	if (!(tab = (char**)malloc(sizeof(char*)
	* (ft_count_words(str) + 1))))
		return (0);
	while (str[i] != '\0')
	{
		while ((POS)
		&& (str[i] != '\0'))
			i++;
		y = 0;
		tab[x] = (char*)malloc(sizeof(char) * (ft_strlenbis(str + i) + 1));
		while (str[i] != '\0' && NEG)
			tab[x][y++] = str[i++];
		tab[x++][y] = '\0';
	}
	tab[ft_count_words(str)] = 0;
	return (tab);
}
