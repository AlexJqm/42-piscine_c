/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:50:45 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/07 16:16:39 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (to_find == 0)
		return (0);
	while (str[k] != '\0')
	{
		i = k;
		j = 0;
		while (str[i] == to_find[j] && str[i] != '\0')
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (str + i - j);
		}
		k++;
	}
	if (str != to_find)
		return (0);
	return (0);
}
