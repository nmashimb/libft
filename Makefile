# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 14:39:57 by nmashimb          #+#    #+#              #
#    Updated: 2019/06/08 12:28:02 by nmashimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strchr.c\
	  ft_strrchr.c\

FLAGS = -Wall -Wextra -Werror
OBJ = ft_strlen.o\
	  ft_strdup.o\
	  ft_strcpy.o\
	  ft_strncpy.o\
	  ft_strcat.o\
	  ft_strncat.o\
	  ft_strchr.o\
	  ft_strrchr.o\

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
