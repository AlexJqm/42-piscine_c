/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:37:32 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/13 23:24:35 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef	struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

char			**ft_split_whitespaces(char *str);
t_stock_par		*ft_param_to_tab(int ac, char **av);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strdup(char *src);

#endif
