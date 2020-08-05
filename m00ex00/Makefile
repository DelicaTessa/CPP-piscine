# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tclement <tclement@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 15:42:41 by tclement      #+#    #+#                  #
#    Updated: 2020/08/05 14:25:36 by tclement      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp %.hpp
	clang++ $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re