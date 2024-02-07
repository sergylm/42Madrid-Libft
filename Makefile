NAME= libft.a
CC= gcc
FLAGS= -Wall -Wextra -Werror
SRC= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c

OBJS= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -crs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

	@ar r $(NAME) $(OBJ)

.PHONY: all clean fclean re
