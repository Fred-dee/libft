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

LIB_SRC_NAME =	ft_atoi.c \
				ft_atol.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isempty.c \
				ft_islower.c \
				ft_isprint.c \
				ft_ispunct.c \
				ft_isspace.c \
				ft_isupper.c \
				ft_itoa.c \
				ft_lstadd.c \
				ft_lstaddback.c \
				ft_lstat.c \
				ft_lstdel.c \
				ft_lstdelone.c \
				ft_lstdup.c \
				ft_lstdupelem.c \
				ft_lstgettail.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstquicksort.c \
				ft_memalloc.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_clr.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_clr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_clr.c \
				ft_putstr_fd.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strclr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strsplit.c \
				ft_strstr.c \
				ft_strsub.c \
				ft_strtrim.c \
				ft_tolower.c \
				ft_toupper.c \

STACK_SRC_NAME=	ft_stack_indexof.c \
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

SRC = $(addprefix $(LIB_SRC_PATH), $(LIB_SRC_NAME)) $(addprefix $(STACK_SRC_PATH), $(STACK_SRC_NAME))
OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall \
		-Wextra \
		-Werror \

all: $(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	find . -name "*.h.gch" -delete

$(OBJ): $(SRC)
	gcc $(FLAGS) -c -I. libft.h stack.h colours.h $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
