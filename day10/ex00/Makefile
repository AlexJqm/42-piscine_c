# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 11:33:06 by aljacque          #+#    #+#              #
#    Updated: 2018/09/16 20:07:13 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER = ./includes/

FLAG = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRCS) -I $(HEADER)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean
