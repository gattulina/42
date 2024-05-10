SRC = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_bzero.c ft_memcpy.c\
	  ft_memmove.c ft_memset.c

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re