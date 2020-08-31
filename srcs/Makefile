# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 10:43:03 by amayor            #+#    #+#              #
#    Updated: 2020/08/31 22:21:43 by amayor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

COMPILER = clang
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
			ft_strcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strclr.c \
			get_next_line.c
HEADER_FILE = libft.h
HEADER_FILE_DIR = .
FLAGS = -c -Wall -Wextra -Werror
OBJECT_FILES = $(SRCS_FILES:.c=.o)

BONUS_SRCS_FILES = 	ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c

BONUS_OBJECT_FILES = $(BONUS_SRCS_FILES:.c=.o)

override OBJ_ALL ?= $(OBJECT_FILES)

all: $(NAME)

$(NAME): $(OBJ_ALL) $(HEADER_FILE)
	@$(ARCHIVER) $(NAME) $(OBJ_ALL)
	@$(RANLIB) $(NAME)
	@echo "[INFO] Library [$(NAME)] is created!"

%.o: %.c
	$(COMPILER) $(FLAGS) -I $(HEADER_FILE_DIR) -c $< -o $@

clean:
	@rm -f $(OBJECT_FILES)
	@rm -f $(BONUS_OBJECT_FILES)
	@echo "[INFO] Object files is removed: [$(OBJECT_FILES)] and bonus: [$(BONUS_OBJECT_FILES)]"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf libft.so
	@echo "[INFO] Library [$(NAME)] is removed!"


bonus:
	@make OBJ_ALL="$(OBJECT_FILES) $(BONUS_OBJECT_FILES)" all
	@echo "[INFO] Bonus function is created and added to libft!"


re: fclean all

so:
	$(COMPILER) -fPIC -c -Wall -Wextra -Werror $(SRCS_FILES) $(BONUS_SRCS_FILES)
	$(COMPILER) -shared -o libft.so $(OBJECT_FILES) $(BONUS_OBJECT_FILES)