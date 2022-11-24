# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 16:36:22 by mkarim            #+#    #+#              #
#    Updated: 2022/11/22 17:16:56 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Conversion.hpp

SRC = main.cpp Conversion.cpp

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