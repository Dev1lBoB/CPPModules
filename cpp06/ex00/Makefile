# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 20:34:04 by wpersimm          #+#    #+#              #
#    Updated: 2021/05/21 11:57:22 by wpersimm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert

SRC		= main.cpp

all:	${NAME}

${NAME}:	${SRC}
			clang++ -Wall -Wextra -Werror ${SRC} -o ${NAME}

clean:

fclean:		clean
			rm -rf ${NAME}

re:			fclean all
