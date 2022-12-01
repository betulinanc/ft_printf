# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: binanc <binanc@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 20:20:58 by binanc            #+#    #+#              #
#    Updated: 2022/12/01 20:21:00 by binanc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 		ft_source.c \
			ft_source1.c \
			ft_printf.c \
			ft_itoa.c 

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY: all clean fclean re 
