# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 18:18:56 by mkarim            #+#    #+#              #
#    Updated: 2022/11/05 10:49:16 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean :
	rm $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all