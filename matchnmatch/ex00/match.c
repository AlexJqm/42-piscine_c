/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:44:43 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/09 23:15:31 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (match(s1, ++s2));
	}
	if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (*s1 == *s2)
		return (match(++s1, ++s2));
	if (*s1 != *s2)
		return (0);
	return (0);
}
