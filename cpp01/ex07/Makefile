# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 20:34:04 by wpersimm          #+#    #+#              #
#    Updated: 2021/04/29 18:31:05 by wpersimm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace

SRC		= main.cpp

all:	${NAME}

${NAME}:	${SRC}
			clang++ -Wall -Wextra -Werror ${SRC} -o ${NAME}

clean:

fclean:		clean
			rm -rf ${NAME}

re:			fclean all
