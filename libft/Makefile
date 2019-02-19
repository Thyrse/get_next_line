# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tefourge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/02 19:39:11 by tefourge          #+#    #+#              #
#    Updated: 2018/12/17 21:03:54 by tefourge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, fclean, re, all

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = ft_putchar.c\
	  ft_putstr.c\
	  ft_strcat.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdup.c\
	  ft_strlen.c\
	  ft_strncat.c\
	  ft_strncpy.c\
	  ft_strstr.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isblank.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_isspace.c\
	  ft_memalloc.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_memdel.c\
	  ft_strdel.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strnew.c\
	  ft_strmapi.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strsub.c\
	  ft_strncmp.c\
	  ft_strtrim.c\
	  ft_strsplit.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_strnstr.c\
	  ft_memcmp.c\
	  ft_atoi.c\
	  ft_strjoin.c\
	  ft_strclr.c\
	  ft_putnbr_fd.c\
	  ft_putnbr.c\
	  ft_memset.c\
	  ft_memmove.c\
	  ft_memcpy.c\
	  ft_memchr.c\
	  ft_memccpy.c\
	  ft_itoa.c\
	  ft_bzero.c\
	  ft_strlcat.c\
	  ft_revmemcpy.c

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

$(NAME):$(OBJECTS)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all
