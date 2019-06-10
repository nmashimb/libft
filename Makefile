# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 14:39:57 by nmashimb          #+#    #+#              #
#    Updated: 2019/06/10 17:26:38 by nmashimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_bzero.c\
	  ft_atoi.c\

FLAGS = -Wall -Wextra -Werror
OBJ = ft_memcpy.o\
	  ft_memccpy.o\
	  ft_memchr.o\
	  ft_memcmp.o\
	  ft_strlen.o\
	  ft_strdup.o\
	  ft_strcpy.o\
	  ft_strncpy.o\
	  ft_strcat.o\
	  ft_strncat.o\
	  ft_strchr.o\
	  ft_strrchr.o\
	  ft_strcmp.o\
	  ft_strncmp.o\
	  ft_isalpha.o\
	  ft_isdigit.o\
	  ft_isalnum.o\
	  ft_isascii.o\
	  ft_isprint.o\
	  ft_toupper.o\
	  ft_tolower.o\
	  ft_bzero.o\
	  ft_atoi.o\

all: $(NAME)
$(NAME): 
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re:	fclean all 
