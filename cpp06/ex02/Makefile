# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 20:34:04 by wpersimm          #+#    #+#              #
#    Updated: 2021/05/21 12:54:57 by wpersimm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= real

SRC		= C.cpp main.cpp A.cpp Base.cpp B.cpp

all:	${NAME}

${NAME}:	${SRC}
			clang++ -Wall -Wextra -Werror ${SRC} -o ${NAME}

clean:

fclean:		clean
			rm -rf ${NAME}

re:			fclean all
