# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 09:23:09 by mdilapi           #+#    #+#              #
#    Updated: 2018/08/14 09:23:13 by mdilapi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES=../includes/
OBJ_PATH=../objs/
SRC_NAME=	ft_stack_indexof.c \
			ft_stack_swap_top.c\
			ft_stackdel.c \
			ft_stackdup.c \
			ft_stackempty.c \
			ft_stacknew.c \
			ft_stackpop.c \
			ft_stackpush.c \
			ft_stackrevrotate.c \
			ft_stackrotate.c \
			ft_stacksize.c \
			ft_stacktop.c \

FLAGS= -Wall -Werror -Wextra
OBJ = $(SRC_NAME:%.c=%.o)
CC = gcc $(FLAGS)

all: $(OBJ)
	mv *.o $(OBJ_PATH)

$(OBJ): $(SRC_NAME)
	$(CC) -I$(INCLUDES) -c $(SRC_NAME)

clean:
	/bin/rm -f $(addprefix $(OBJ_PATH), $(OBJ))

re: clean all	 