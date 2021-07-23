NAME	= ex00

SRCS	= main.cpp

HEAD	= whatever.hpp

FLAGS	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${SRCS} ${HEAD}
			clang++ ${FLAGS} ${SRCS} -o ${NAME}

clean:

fclean: clean
		rm -rf ${NAME}

re:		fclean all
