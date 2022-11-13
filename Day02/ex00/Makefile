# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:05:11 by mkarim            #+#    #+#              #
#    Updated: 2022/11/12 19:40:21 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = first

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Fixed.hpp

SRC = main.cpp Fixed.cpp

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