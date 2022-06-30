# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/30 15:37:25 by mxu               #+#    #+#              #
#    Updated: 2021/07/30 15:38:34 by mxu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

NAME = replace

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
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all
