# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 16:36:14 by mkarim            #+#    #+#              #
#    Updated: 2022/08/11 16:08:28 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

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