/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 08:34:12 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/06 15:07:03 by aljacque         ###   ########.fr       */
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

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 2)
	{
		j = 1;
		while (j < argc - 1)
		{
			i = j + 1;
			while (i < argc)
			{
				if (ft_strcmp(argv[j], argv[i]) > 0)
					ft_swap(&argv[j], &argv[i]);
				i++;
			}
			ft_putstr(argv[j]);
			ft_putchar('\n');
			j++;
		}
		ft_putstr(argv[j]);
		ft_putchar('\n');
	}
	return (0);
}
