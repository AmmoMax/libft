# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 10:43:03 by amayor            #+#    #+#              #
#    Updated: 2020/05/12 22:32:31 by amayor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

COMPILER = gcc
ARCHIVER = ar rc
NAME = libft.a
RANLIB  = ranlib
SRCS_FILES = ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_atoi.c
HADER_FILE = libft.h
HEADER_FILE_DIR = .
LIB_NAME = libft.a
FLAGS = -c -Wall -Wextra -Werror
OBJECT_FILES = ft_memset.o \
			ft_bzero.o \
			ft_memcpy.o \
			ft_memccpy.o \
			ft_memmove.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_strlen.o \
			ft_strlcpy.o \
			ft_strlcat.o \
			ft_strchr.o \
			ft_strrchr.o \
			ft_strnstr.o \
			ft_strncmp.o \
			ft_atoi.o

all: $(NAME)

$(NAME):
	@$(COMPILER) $(FLAGS) $(SRCS_FILES) -I $(HEADER_FILE_DIR)
	@$(ARCHIVER) $(LIB_NAME) $(OBJECT_FILES)
	@$(RANLIB) $(NAME)
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