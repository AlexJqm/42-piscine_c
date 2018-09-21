# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 03:10:07 by aljacque          #+#    #+#              #
#    Updated: 2018/09/20 16:45:04 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CFLAGS = -Wall -Wextra -Werror
SRC = functions/*.c
UTLY = utility/*.c
HEADER = header
OBJECTS = *.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC) $(UTLY) -I $(HEADER)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
