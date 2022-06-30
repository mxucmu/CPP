# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 17:16:22 by mxu               #+#    #+#              #
#    Updated: 2021/10/15 22:19:15 by mxu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

NAME = SpecificForm

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
	rm -f *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all
