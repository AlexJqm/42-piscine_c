/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 12:56:15 by guy               #+#    #+#             */
/*   Updated: 2018/09/04 01:15:11 by guy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_eight_queens_puzzle(void);
//void	ft_eight_queens_puzzle2(void);

int main(void)
{
	printf("Ex00:\t ");
	printf("13!=%d ", ft_iterative_factorial(13));
	printf("12!=%d ", ft_iterative_factorial(12));
	printf("4!=%d ", ft_iterative_factorial(4));
	printf("0!=%d ", ft_iterative_factorial(0));
	printf("-5!=%d\n", ft_iterative_factorial(-5));

	printf("Ex01:\t ");
	printf("13!=%d ", ft_recursive_factorial(13));
	printf("12!=%d ", ft_recursive_factorial(12));
	printf("4!=%d ", ft_recursive_factorial(4));
	printf("0!=%d ", ft_recursive_factorial(0));
	printf("-5!=%d\n", ft_recursive_factorial(-5));

	printf("Ex02:\t -2**3=%d 3**0=%d 4**-1=%d\n",
			ft_iterative_power(-2,  3),
			ft_iterative_power( 3,  0),
			ft_iterative_power( 4, -1));
	
	printf("Ex03:\t -2**3=%d 3**0=%d 4**-1=%d\n",
			ft_recursive_power(-2,  3),
			ft_recursive_power( 3,  0),
			ft_recursive_power( 4, -1));

	printf("Ex04:\t starting at index -1:  [-1]%d [0]%d [1]%d [2]%d [3]%d [4]%d,..\n",
			ft_fibonacci(-1),
			ft_fibonacci(0),
			ft_fibonacci(1),
			ft_fibonacci(2),
			ft_fibonacci(3),
			ft_fibonacci(4));

	printf("Ex05:\t squareroots -4:%d 0:%d 1:%d 2:%d 16:%d 50:%d 196:%d.\n",
			ft_sqrt(-4),
			ft_sqrt(0),
			ft_sqrt(1),
			ft_sqrt(2),
			ft_sqrt(16),
			ft_sqrt(50),
			ft_sqrt(196));
	clock_t start = clock();
	printf("With a big num:%d ", ft_sqrt(2147483647));
	clock_t end = clock();
	double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
	printf(" it takes %f seconds.\n", time_spent);

	printf("Ex06:\t prime? -2:%d 0:%d 1:%d 2:%d 3:%d 9:%d 17:%d\n",
			ft_is_prime(-2),
			ft_is_prime(0),
			ft_is_prime(1),
			ft_is_prime(2),
			ft_is_prime(3),
			ft_is_prime(9),
			ft_is_prime(17));
	start = clock();
	printf("With a big num:%d ", ft_is_prime(2147483647));
	end = clock();
	time_spent = (double)(end - start) / CLOCKS_PER_SEC;
	printf(" it takes %f seconds.\n", time_spent);

	printf("Ex07:\t next_prime ");
	int a = -2;
	while (a < 20)
	{
		printf("%d:%d ", a, ft_find_next_prime(a));
		a++;
	}
	start = clock();
	printf("\nWith a big num:%d ", ft_find_next_prime(2147483647));
	end = clock();
	time_spent = (double)(end - start) / CLOCKS_PER_SEC;
	printf(" it takes %f seconds.\n", time_spent);
	
	start = clock();
	printf("Ex08: Found %d layouts for the Queens, ", ft_eight_queens_puzzle());
	end = clock();
	time_spent = (double)(end - start) / CLOCKS_PER_SEC;
	printf("which took %f seconds.\n", 
			time_spent);
	//printf("Ex08: %d valid layouts.", ft_eight_queens_puzzle());
	return (0);
}
