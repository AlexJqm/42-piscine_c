/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 05:35:55 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/06 14:43:45 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
