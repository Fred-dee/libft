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

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	find . -name "*.h.gch" -delete
$(OBJ):
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	make -C ./lib_src
	make -C ./stack_src

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
