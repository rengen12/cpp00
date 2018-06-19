# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amichak <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 11:53:43 by amichak           #+#    #+#              #
#    Updated: 2018/06/19 20:12:56 by amichak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all clean fclean re $(NAME)

CFLAGS =	-Wall -Wextra -Werror
SRC =		main.cpp PhoneBook.cpp Record.cpp
HEADERS =   PhoneBook.hpp Record.hpp
NAME =		phonebook

OBJ =		$(patsubst %.cpp, %.o, $(SRC))

all:		$(NAME)

$(NAME):	$(OBJ)
	clang++ $(CFLAGS) -o $(NAME) $(OBJ)


%.o:	%.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re:			fclean all
