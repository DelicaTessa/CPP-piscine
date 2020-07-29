# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tclement <tclement@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 15:42:41 by tclement      #+#    #+#                  #
#    Updated: 2020/07/27 18:21:19 by tclement      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp

all: $(NAME)

$(NAME): 
	clang++ $(CFLAGS) $(SRC) -o $@

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re