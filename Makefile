LIBFT_PATH				= libft
LIBFT					= $(LIBFT_PATH)/libft.a
NAME					= libftprintf.a
CFLAGS					= -Wall -Werror -Wextra -MMD -MP
C_MANDATORY_FILES		= ft_printf.c \
						src/ft_writechar.c \
						src/ft_writenb.c \
						src/ft_writestr.c \
						src/ft_writepointer.c \
						src/ft_writenil.c \
						src/ft_writenull.c \
						src/ft_writehex.c

O_MANDATORY_FILES			= $(C_MANDATORY_FILES:.c=.o)
O_BONUS_FILES				= $(C_BONUS_FILES:.c=.o)
O_FILES_ALL					= $(O_MANDATORY_FILES) $(O_BONUS_FILES)
D_FILES						= $(O_FILES_ALL:.o=.d)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

$(NAME): $(LIBFT) $(O_MANDATORY_FILES) 
	cp $(LIBFT) $(NAME)
	ar -rcs $@ $(O_MANDATORY_FILES)

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(O_FILES_ALL) $(D_FILES)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(D_FILES)