# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 17:08:35 by merlich           #+#    #+#              #
#    Updated: 2022/08/06 22:00:04 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	claptrap

SRCS		=	main.cpp ClapTrap.cpp

HEADER		=	ClapTrap.hpp

OBJS		=	${SRCS:.cpp=.o}

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

%.o:		%.cpp Makefile ${HEADER}
			${CPP} ${CPPFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS} Makefile
			${CPP} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
