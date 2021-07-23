NAME	= ex01

SRCS	= main.cpp

HEAD	= iter.hpp

FLAGS	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${SRCS} ${HEAD}
			clang++ ${FLAGS} ${SRCS} -o ${NAME}

clean:

fclean: clean
		rm -rf ${NAME}

re:		fclean all
