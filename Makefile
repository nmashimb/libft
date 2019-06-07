NAME = libft.a
SRC = ft_strlen.c

FLAGS = -Wall -Wextra -Werror
OBJ = ft_strlen.o

all: $(NAME)
$(NAME): 
         gcc $(FLAGS) -c $(SRC)
         ar rc (NAME) $(OBJ)
         ranlib $(NAME)
clean:
        rm -f $(OBJ)
fclean: clean
        rm -f $(NAME)
re: fclean all 
