/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 22:16:06 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/12 21:29:33 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		size = size + sizeof(argv[i] + 1);
		i++;
	}
	if (!(tab = (char*)malloc(size)))
		return (0);
	tab[0] = '\0';
	i = 1;
	while (i < argc)
	{
		ft_strcat(tab, argv[i]);
		if (i < argc - 1)
			ft_strcat(tab, "\n");
		i++;
	}
	return (tab);
}
