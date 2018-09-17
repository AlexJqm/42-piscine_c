# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 15:20:54 by aljacque          #+#    #+#              #
#    Updated: 2018/09/16 19:56:21 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op
SRCS = do_op.c add.c atoi.c div.c mod.c multi.c sous.c
HEADER = do_op.h
FLAG = -Wall -Wextra -Werror
CC = cc $(FLAG) -o

all:
	$(CC) $(NAME) $(SRCS) -I $(HEADER)
clean:
	rm -f *.o
re:
	clean all
