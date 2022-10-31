# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 15:37:05 by mkarim            #+#    #+#              #
#    Updated: 2022/10/31 13:53:21 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Zombie.hpp

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean :
	rm $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
