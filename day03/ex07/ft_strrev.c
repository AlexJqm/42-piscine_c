/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 06:58:26 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/02 16:41:18 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		a;
	int		count;
	char	tmp;

	a = 0;
	while (str[a] != '\0')
		a++;
	a--;
	count = 0;
	while (count < a)
	{
		tmp = str[a];
		str[a] = str[count];
		str[count] = tmp;
		count++;
		a--;
	}
	return (str);
}
