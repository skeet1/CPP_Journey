# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 08:01:36 by mkarim            #+#    #+#              #
#    Updated: 2022/11/17 09:22:19 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = out

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Bureaucrat.hpp

SRC = main.cpp Bureaucrat.cpp

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