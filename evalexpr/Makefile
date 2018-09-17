# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 17:33:03 by aljacque          #+#    #+#              #
#    Updated: 2018/09/16 20:19:03 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = main.c eval_expr.c ./sources/ft_delete_space.c
SRC += ./sources/ft_print.c ./sources/ft_detect_op.c ./sources/ft_detect_paren.c
HEADER = -I eval_expr.h
FLAG = -Wall -Wextra -Werror
CC = cc $(FLAG) -o

all:
	$(CC) $(NAME) $(SRC) $(HEADER)
clean:
	rm eval_expr
fclean:
	clean
re:
	fclean all
