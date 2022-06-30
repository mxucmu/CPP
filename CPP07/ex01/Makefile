# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 21:36:46 by mxu               #+#    #+#              #
#    Updated: 2021/10/26 14:40:21 by mxu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

NAME = iter

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(patsubst %.cpp,%.o,$(wildcard *.cpp)) 

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(OBJECTS)
	clang++ $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS): %.o: %.cpp
	clang++ $(CFLAGS) -c $< -o $@  

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
