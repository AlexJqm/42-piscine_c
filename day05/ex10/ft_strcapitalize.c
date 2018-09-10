/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:45:33 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/08 14:59:46 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	while (str[j] != '\0')
	{
		if (str[j - 1] == ' ' && (str[j] >= 97 && str[j] <= 122))
			str[j] = str[j] - 32;
		if (((str[j - 1] >= 58 && str[j - 1] <= 64) ||
		(str[j - 1] >= 91 && str[j - 1] <= 96) ||
		(str[j - 1] >= 0 && str[j - 1] <= 47) ||
		(str[j - 1] >= 123 && str[j - 1] <= 127))
		&& (str[j] >= 97 && str[j] <= 122))
			str[j] = str[j] - 32;
		j++;
	}
	return (str);
}
