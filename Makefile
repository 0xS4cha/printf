LIBFT = ./libft/libft.a
NAME			= libftprintf.a
CFLAGS			= -Wall -Werror -Wextra -I. -I./libft
C_FILES			= ft_printf.c \
				  src/ft_writechar.c \
				  src/ft_writenb.c \
				  src/ft_writestr.c \
				  src/ft_writepointer.c \
				  src/ft_writenil.c \
				  src/ft_writenull.c \
				  src/ft_writehex.c

O_FILES			= $(C_FILES:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(O_FILES) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -rcs $@ $(O_FILES)

clean:
	rm -rf $(O_FILES)
	$(MAKE) -C ./libft clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re