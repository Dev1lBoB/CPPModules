# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 20:34:04 by wpersimm          #+#    #+#              #
#    Updated: 2021/06/03 11:50:25 by wpersimm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

SRC		= PhoneBook.cpp Contact.cpp main.cpp

HEAD	= PhoneBook.hpp Contact.hpp

all:	${NAME}

${NAME}:	${SRC} ${HEAD}
			clang++ -Wall -Wextra -Werror -std=c++98 ${SRC} -o ${NAME}

clean:

fclean:		clean
			rm -rf ${NAME}

re:			fclean all
