# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 12:54:13 by mdilapi           #+#    #+#              #
#    Updated: 2018/08/14 12:54:14 by mdilapi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES=../includes/
OBJ_PATH=../objs/
SRC_NAME=	ft_graph_addedge.c \
			ft_graph_addvertex.c \
			ft_graph_genmatrices.c \
			ft_graph_getvertex_byid.c \
			ft_graph_getvertex_byname.c \
			ft_graph_new.c \
			ft_graph_print.c \
			ft_graph_vertexnew.c 

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
