# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/01 11:11:55 by jduvenh           #+#    #+#              #
#    Updated: 2018/09/08 20:09:43 by jduvenh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC_DIR = src/

LIB_DIR = libftgnl/
PRINTF_DIR = ft_printf/


SRC_FILES = ft_lowerr.c \
			timesort.c \
			ft_permish.c \
			ft_ls.c \
			ft_gout.c \
			ft_rwx.c \
			r.c

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

LIBFT = $(addprefix $(LIB_DIR), libftgnl.a)
PRINTF = $(addprefix $(PRINTF_DIR), libftprintf.a) 

OBJ = $(SRC_FILES:.c=.o)

INC = -Iincludes/

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@echo "Compiling... Compiling........."
	@gcc -c $(FLAGS) $(SRC) $(INC)
	@gcc -o $(NAME) $(OBJ) $(LIBFT) $(PRINTF)
	@echo "ft_ls created".

reall:
	$(MAKE) -C libftgnl/ re
	$(MAKE) -C libftgnl/ clean
	$(MAKE) -C ft_printf/ re
	$(MAKE) -C ft_printf/ clean
	@make re
	@make clean
rc:	
	@make re
	@make clean

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
