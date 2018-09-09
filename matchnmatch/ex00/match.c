/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:44:43 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/09 13:08:33 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void ft_putchar(char c)
{
  write(1, & c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * -1);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + 48);
    }
}

int    match(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
      if (*s1 == '\0' || *s2 == '\0')
          return (0);
      if (*s1 == *s2)
          return (match(s1 + 1, s2 + 1));
      if (*s2 == '*')
          return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
      else
          return(0);
      i++;
    }
    return (1);
}

int    main(int argc, char **argv)
{
    char s1[] = "bite";
    char s2[] = "b*";

    ft_putnbr(match(s1, s2));
    return (0);
}
