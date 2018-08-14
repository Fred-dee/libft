# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/21 08:20:34 by mdilapi           #+#    #+#              #
#    Updated: 2018/05/21 08:20:35 by mdilapi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC_PATH=./includes/
LIB_SRC_PATH =./lib_src/
STACK_SRC_PATH=./stack_src/
GRAPH_SRC_PATH=./graph_src/
OBJ_PATH=./objs/


FLAGS = -Wall -Wextra -Werror
CC = gcc $(FLAGS)

OBJ= $(wildcard ./objs/*.o)

all: $(NAME)

$(NAME): SUBDIR
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	find . -name "*.h.gch" -delete

SUBDIR:
	@make -C $(LIB_SRC_PATH)
	@make -C $(STACK_SRC_PATH)
	@make -C $(GRAPH_SRC_PATH)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
