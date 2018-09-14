/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:14:51 by guy               #+#    #+#             */
/*   Updated: 2018/09/04 11:37:12 by guy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int a;
	a = 0;
	printf("Default value %d .\n", a);

	// Ex00
	int *ptr_a;
	ptr_a = &a;
	ft_ft(ptr_a);
	printf("Ex00: %d .\n", a);      

	// Ex01
	// ~ bit confused if pointing can be chained in one line
	printf("Ex01: (too lazy to type it out, just check the number of *'s)\n");
	
	// Ex02
	int b;
	int *ptr_b;
	int temp_a;
	int temp_b;

	a = 5;													// change me~
	b = 21;													// change me~
	ptr_a = &a;
	ptr_b = &b;

	temp_a = a;
	temp_b = b;
	ft_swap(ptr_a, ptr_b);
	printf("Ex02: From A%d and B%d, they swapped A%d B%d\n",
			temp_a, temp_b, a, b);

	// Ex03
	int *ptr_div;
	int *ptr_mod;
	int div;
	int mod;

	a = 21;  												// change ME!
	b = 5;   												// change ME!
	temp_a = a;
	temp_b = b;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("Ex03: %d/%d is %d remainder %d.\n", temp_a, temp_b, div, mod);
	
	// Ex04
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("Ex04: %d/%d is A%d B%d\n", temp_a, temp_b, a, b);

	// Ex05
	ft_putstr("Ex05: Hello\n");								// change ME!

	// Ex06
	a = ft_strlen("Bonjour\0");								// change ME!
	printf("Ex06: The length of 'Bonjour' is %d.\n", a);

	// Ex07
	char *word = malloc(sizeof(char) * 200);
	strcpy (word, "Bonjour~\0");							// change ME!
	printf("Ex07: Original value \"%s\".\n", word);
	ft_strrev(word);
	printf("\tDid the original str change in place? %s\n", word);
	ft_strrev(word); // reverts it back to Bonjour
	printf("\tDoes it also return the reversed string? %s\n",ft_strrev(word));

	// Ex08
	char str[20];
	strcpy(str, " -42-");									// change ME!
	printf("Ex08: \"%s\" = %d.\n", str, ft_atoi(str));
	printf("\tThe official atoi says: %d\n", atoi(str));
	strcpy(str, "0");
	printf("\t[%s]:%d:%d", str, ft_atoi(str), atoi(str));
	strcpy(str, "-12o4");
	printf(" [%s]:%d:%d", str, ft_atoi(str), atoi(str));
	strcpy(str, "1709551616123 ");
	printf(" [%s]:%d:%d", str, ft_atoi(str), atoi(str));
	strcpy(str, " ++42");
	printf(" [%s]:%d:%d\n", str, ft_atoi(str), atoi(str));
	
	// Ex09
	int tab[4] = {1,2,0,4};									// woohoo
	printf("Ex09: Original array {%d, %d, %d, %d}.\n", 
			tab[0], tab[1], tab[2], tab[3]);
	ft_sort_integer_table(&tab[0], 4);
	printf("\tSorted: {%d, %d, %d, %d}.", 
			tab[0], tab[1], tab[2], tab[3]);
}
