# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 08:01:36 by mkarim            #+#    #+#              #
#    Updated: 2022/11/27 21:40:12 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Array.hpp

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all