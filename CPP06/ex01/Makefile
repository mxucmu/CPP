# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 18:29:29 by mxu               #+#    #+#              #
#    Updated: 2021/10/18 18:29:57 by mxu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

NAME = Serialization

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
