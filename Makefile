# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 10:43:03 by amayor            #+#    #+#              #
#    Updated: 2020/05/24 16:48:20 by amayor           ###   ########.fr        #
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
			ft_putnbr_fd.c
HADER_FILE = libft.h
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

all: $(NAME)

$(NAME): $(SRCS_FILES) $(HADER_FILE)
	@$(COMPILER) $(FLAGS) $(SRCS_FILES) -I $(HEADER_FILE_DIR)
	@$(ARCHIVER) $(NAME) $(OBJECT_FILES)
	@$(RANLIB) $(NAME)
	@echo "[INFO] Library [$(NAME)] is created!"
	
clean:
	@rm -f $(OBJECT_FILES)
	@echo "[INFO] Object files is removed: [$(OBJECT_FILES)]"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(LIB_NAME_SO)
	@echo "[INFO] Library [$(NAME)] is removed!"

bonus: $(NAME)
	@$(COMPILER) $(FLAGS) $(BONUS_SRCS_FILES) -I $(HEADER_FILE_DIR)
	@$(ARCHIVER) $(NAME) $(BONUS_OBJECT_FILES)
	@$(RANLIB) $(NAME)
	@echo "[INFO] Bonus function is created!"


re: fclean all

so:
	gcc -c -Wall -Wextra -Werror -fPIC $(SRCS_FILES)
	gcc -shared -o libft.so $(OBJECT_FILES) $(BONUS_OBJECT_FILES)