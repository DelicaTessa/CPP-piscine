# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tclement <tclement@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 18:35:10 by tclement      #+#    #+#                  #
#    Updated: 2020/08/05 14:21:25 by tclement      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = 	Contact.class.cpp \
		functions.cpp \
		main.cpp \

HEADER = Contact.class.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	clang++ $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp %.hpp
	clang++ $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re