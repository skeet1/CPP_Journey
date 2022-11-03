# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 17:47:23 by mkarim            #+#    #+#              #
#    Updated: 2022/11/03 18:12:28 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< 

clean :
	rm $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all