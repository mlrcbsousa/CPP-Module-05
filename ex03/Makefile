# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 21:26:04 by msousa            #+#    #+#              #
#    Updated: 2022/04/12 23:52:40 by msousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC			= clang++
RM			= rm -f
OBJ			= ${SRC:%.cpp=obj/%.o}
SRC			= Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp Intern.cpp \
					RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp
INC			= Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp Intern.hpp \
					RobotomyRequestForm.hpp PresidentialPardonForm.hpp

NAME		= a.out

${NAME}:			${OBJ}
							${CC} ${CFLAGS} ${OBJ} -o $@

obj/%.o:%.cpp	${INC}
							@mkdir -p $(dir $@)
							${CC} ${CFLAGS} -c $< -o $@

all:					${NAME}

test:					${NAME}
							-./${NAME}

leaks:				${NAME}
							-leaks -atExit -- ./${NAME} | grep LEAK:

clean:
							${RM} -rf obj

fclean:				clean
							${RM} ${NAME}

re: 					fclean all

.PHONY : 			all clean fclean re
