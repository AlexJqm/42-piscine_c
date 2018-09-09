/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 09:59:27 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/08 16:30:20 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < (size - 1))
	{
		dest[i] = '\0';
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
