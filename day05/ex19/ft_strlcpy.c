/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 09:59:27 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/09 17:02:08 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
		i = i + 1;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while (src[i] != '0' && (unsigned int)i < size - 1)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
