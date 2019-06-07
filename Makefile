# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 14:39:57 by nmashimb          #+#    #+#              #
#    Updated: 2019/06/07 15:19:33 by nmashimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c\
	  ft_strdup.c\

FLAGS = -Wall -Wextra -Werror
OBJ = ft_strlen.o\
	  ft_strdup.o\

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
