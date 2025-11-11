NAME			= libftprintf.a
CFLAGS			= -Wall -Werror -Wextra -I.
C_FILES			= ft_printf.c test.c

O_FILES			= $(C_FILES:.c=.o)

all: $(NAME)

$(NAME): $(O_FILES)
	ar -rcs $@ $(O_FILES)

clean:
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re