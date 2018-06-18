# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amichak <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 11:53:43 by amichak           #+#    #+#              #
#    Updated: 2018/01/23 12:07:30 by amichak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all clean fclean re $(NAME)

CFLAGS =	-Wall -Wextra -Werror
SRC =		megaphone.cpp

NAME =		megaphone

OBJ =		megaphone.o

all:		$(NAME)

$(NAME):	$(OBJ)
	clang++ $(CFLAGS) -o $(NAME) $(OBJ)


%.o:	%.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf megaphone.o

fclean:		clean
	@rm -f $(NAME)

re:			fclean all
