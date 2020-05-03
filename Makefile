# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 10:43:03 by amayor            #+#    #+#              #
#    Updated: 2020/05/03 15:00:37 by amayor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

COMPILER = gcc
ARCHIVER = ar rc
NAME = libft
SRCS_FILES = ft_memset.c ft_bzero.c
HADER_FILE = libft.h
HEADER_FILE_DIR = .
LIB_NAME = libft.a
FLAGS = -c -Wall -Wextra -Werror
OBJECT_FILES = ft_memset.o ft_bzero.o

all: $(NAME)

$(NAME):
	@$(COMPILER) $(FLAGS) $(SRCS_FILES) -I $(HEADER_FILE_DIR)
	@$(ARCHIVER) $(LIB_NAME) $(OBJECT_FILES)
	@echo "[INFO] Library [$(LIB_NAME)] is created!"
	
clean:
	@rm -f $(OBJECT_FILES)
	@echo "[INFO] Object files is removed: [$(OBJECT_FILES)]"

fclean: clean
	@rm -rf $(LIB_NAME)
	@rm -rf $(LIB_NAME_SO)
	@echo "[INFO] Library [$(LIB_NAME)] is removed!"

re: fclean all

so:
	gcc -c -Wall -Wextra -Werror -fPIC $(SRCS_FILES)
	gcc -shared -o libft.so $(OBJECT_FILES)