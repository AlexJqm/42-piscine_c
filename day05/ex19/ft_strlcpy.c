/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 09:59:27 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/08 10:49:23 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size)
			dest[i] = src[i];
		if (i >= size)
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (i);
}
