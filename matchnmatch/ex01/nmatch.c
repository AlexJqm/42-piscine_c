/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 08:12:14 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/09 23:15:32 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (nmatch(s1, ++s2));
	}
	if (*s2 == '*')
		return ((nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1)));
	if (*s1 == *s2)
		return (nmatch(++s1, ++s2));
	if (*s1 != *s2)
		return (0);
	return (0);
}
