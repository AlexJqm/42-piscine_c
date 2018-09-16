/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:20:38 by guy               #+#    #+#             */
/*   Updated: 2018/09/11 04:59:16 by guy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
//char	*ft_strncat(char *dest, char *src, int nb);
//unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);
void	ft_putstr_non_printable(char *str);

void ft_print_null(char *str, int n)
{
	int i = 0;

	while (i < n)
	{	
		if (str[i] == '\0')
			str[i] = '*';
		ft_putchar(str[i++]);
	}
}

int		main(void)
{
	// Ex00 putstr
	ft_putstr("Ex00: Hello\n");	

	// Ex01 putnbr
	printf("Ex01: "); fflush(stdout);
	ft_putnbr(-2147483648);
	printf(" ");
	ft_putnbr(-12345);
	printf(" ");
	ft_putnbr(0);
	printf(" ");
	ft_putnbr(12345);
	printf(" ");
	ft_putnbr(2147483647);
	
	// Ex02 Atoi
	char str[20];
	strcpy(str, " -42-");									// change ME!
	printf("\nEx02: \"%s\" = %d.\n", str, ft_atoi(str)); fflush(stdout);
	printf("\tThe official atoi says: %d\n", atoi(str));
	strcpy(str, "/+123");
	printf("\t[%s]:%d:%d", str, ft_atoi(str), atoi(str));
	strcpy(str, "-12o4");
	printf(" [%s]:%d:%d", str, ft_atoi(str), atoi(str));
	strcpy(str, "1709551616123 ");
	printf(" [%s]:%d:%d", str, ft_atoi(str), atoi(str));
	strcpy(str, "\n+42");
	printf(" [%s]:%d:%d\n", str, ft_atoi(str), atoi(str));

	// Ex03 ft_strcpy
	char dest3[3];
	char dest20[20];
	char *src = malloc(sizeof(char) * 200);
	strcpy(src, "World");

	strcpy(dest3, "Hi");
	strcpy(dest20, "Heyworld how are ya");
	printf("Ex03: ft_strcpy\n\t");
	printf("Original values: [dest3]%s\t[dest20]%s\t[src]%s\n",
				   dest3,    dest20,    src); fflush(stdout);

	ft_strcpy(dest3, src);
	ft_strcpy(dest20, src);		
	printf("\tAfter ft_strcpy: ");fflush(stdout);
	printf("[dest3]%s\t[dest20]%s\t\t[src]%s",
			 dest3,    dest20,    src);
	printf("\n\tPrinting nulls: ");fflush(stdout);
	ft_print_null(dest20, 20);
	
	/*
	strcpy(dest3, "Hi\0");
	strcpy(dest20, "Hey\0");	
	printf("\tAfter    strcpy: ");fflush(stdout);
	strcpy(dest3, src);
	strcpy(dest20, src);
	printf("[dest3]%s\t[dest20]%s\t[src]%s\n",
			 dest3,    dest20,    src);
	*/

	printf("\nEx04: ft_strncpy\n"); fflush(stdout);
	strcpy(dest20, "Heyworld how are ya");
	ft_strncpy(dest20, "Hello World", 8);
	printf("\tTruncated 'Hello World' at 8:\n");
	printf("\t\t>> %s\n", strncpy(dest20, "Hello World", 8));
	printf("\t\t>  %s\n", dest20);
	printf("\t\t*  "); fflush(stdout);
	ft_print_null(dest20, 20);
	strcpy(dest20, "");
	strncpy(dest20, "Hello World", 8);
	printf("\n\t\t:  %s\n", dest20);

	printf("\tChecking if strncpy(dest20, \"Hi\", 8) will fill in nulls\n\t\t");
	strcpy(dest20, "abcdefghijklmnopqrs");
	strncpy(dest20, "Hi", 8);
	fflush(stdout);
	ft_print_null(dest20, 20);

	printf("\nEx05: ft_strstr\n");

	char haystack[30];
	char needle[10];

	strcpy(haystack, "WorHello World~ Bye!");
	strcpy(needle, "World");

	printf("\tHey, strstr found the ");
	printf("%s", strstr(haystack, needle));
	printf("\n\tft_strstr found the ");
	printf("%s", ft_strstr(haystack, needle));
	
	strncpy(haystack, "WorHello World~ Bye!", 30);
	strncpy(needle, "Wor!",10);

	printf("\n\tBut when the World! is really missing, strstr:");
	printf("%s", ft_strstr(haystack, needle));

	printf("\n\tft_strstr can't find it too:");
	printf("%s", strstr(haystack, needle));
	
	printf("\nEx06: ft_strcmp\n\t");
	printf("A!, A!: %d[%d]\n\t",
			ft_strcmp("A!", "A!"),
			strcmp("A!", "A!"));
	printf("aAb, aAbB: %d[%d] ",
			ft_strcmp("aAb", "aAbB"),
			strcmp("aAb", "aAbB"));

	printf("\nEx07: ft_strncmp\n\t");
	printf("abcABC, abcdef, 3: %d[%d]\n\t",
			ft_strncmp("abcABC", "abcdef", 3),
			strncmp("abcABC", "abcdef", 3));
	printf("aAb, aAbB, 4: %d[%d]\n\t",
			ft_strncmp("aAb", "aAbB", 4),
			strncmp("aAb", "aAbB", 4));
	printf("aAb, aAbB, 3: %d[%d]",
			ft_strncmp("aAb", "aAbB", 3),
			strncmp("aAb", "aAbB", 3));

	char *line = (char *)malloc(sizeof(char)*100);
	strlcpy(line, "a rAn-doM12+3\ts3nT3nc3.", 100);
	printf("\nEx08: ft_strupcase\n");
	printf("\t%s\n", line);
	printf("\t%s\n", ft_strupcase(line));
	
	printf("Ex09: lowercase   %s\n", ft_strlowcase(line));
	
	printf("Ex10: capitalized %s\n", ft_strcapitalize(line));

	printf("\tIt should look like: A Ran-Dom12+3\tS3nt3nc3.\n");

	char *word = malloc(sizeof(char) * 200);
	printf("Ex11: ft_str_is_alpha\n");
	strlcpy(word, "abcABCQWEJ", 200);
	printf("\t%s : %d\n", word, ft_str_is_alpha(word));
	strlcpy(word, "abcd1", 200);
	printf("\t%s : %d\n", word, ft_str_is_alpha(word));

	printf("Ex12: ft_str_is_numeric\n");
	strlcpy(word, "gil716", 200);
	printf("\t%s : %d\n", word, ft_str_is_numeric(word));
	strlcpy(word, "12931", 200);
	printf("\t%s : %d\n", word, ft_str_is_numeric(word));
	
	printf("Ex13: ft_str_is_lowercase\n");
	strlcpy(word, "", 200);
	printf("\t%s : %d\n", word, ft_str_is_lowercase(word));
	strlcpy(word, "AKS", 200);
	printf("\t%s : %d\n", word, ft_str_is_lowercase(word));

	printf("Ex14: ft_str_is_uppercase\n");
	strlcpy(word, "AKS", 200);
	printf("\t%s : %d\n", word, ft_str_is_uppercase(word));
	strlcpy(word, "abs", 200);
	printf("\t%s : %d\n", word, ft_str_is_uppercase(word));
	
	printf("Ex15: ft_str_is_printable\n");
	strlcpy(word, "ajf~*~\t9187`", 200);
	printf("\t%s : %d\n", word, ft_str_is_printable(word));
	strlcpy(word, "~~ ", 200);
	printf("\t%s : %d\n", word, ft_str_is_printable(word));
	
	printf("Ex16: str_cat\n");
	printf("\nIn progress!");

	
	printf("\nEx19: strlcpy\n");
	//char *dest = malloc(sizeof(char) * 200);

	printf("Ex20: ft_putnbr_base\n");
	printf("\t123 in base 0123456789: "); fflush(stdout);
	ft_putnbr_base(123, "0123456789");
	printf("\n\t-14 in base 01: "); fflush(stdout);
	ft_putnbr_base(-14, "01");
	printf("\n\t20 in base gilian: "); fflush(stdout);
	ft_putnbr_base(20, "gilian");

	printf("\nEx21: ");
	printf("\t6F86D, 0123456789ABCDEF: %d[456813]\n",
			ft_atoi_base("6F86D", "0123456789ABCDEF"));
	printf("\t-#*$h#*, @#()h*/$: %d[57101]\n", 
			ft_atoi_base("-#*$h#*", "@#()h*/$"));
	printf("\t-123, -123: %d[0]\n", ft_atoi_base("-123", "-123"));
	printf("\t19, 0123: %d[0]\n", ft_atoi_base("19", "0123"));
	printf("\t010100101101, 011: %d[0]\n", 
			ft_atoi_base("010100101101", "011"));
	printf("\t'', 123: %d[0]\n", ft_atoi_base("", "123"));

	printf("\nEx22: ft_putstr_non_printable\n");
	printf("\tInput: Coucou\\ntu \\e vas bien ?\n");
	printf("\tAnswer:\t"); fflush(stdout);
	ft_putstr_non_printable("Coucou\ntu \e vas bien ? ");
	printf("\n\tRight: Coucou\\0atu \\1b vas bien ?\n");

	printf("");
	printf("\n\nList of printable characters:\n");

	int c;
	for (c = 1; c <= 128; c++)
		if (isprint(c) != 0)
			printf("%d:%c ", c, c);
	return (0);
}
