LIBFT = ./libft/libft.a
NAME				= libftprintf.a
BONUS_DONE			= .bonus_done
CFLAGS				= -Wall -Werror -Wextra -I. -MMD -MP
C_MANDATORY_FILES	= mandatory/ft_printf.c \
					mandatory/src/ft_writechar.c \
					mandatory/src/ft_writenb.c \
					mandatory/src/ft_writestr.c \
					mandatory/src/ft_writepointer.c \
					mandatory/src/ft_writenil.c \
					mandatory/src/ft_writenull.c \
					mandatory/src/ft_writehex.c

O_MANDATORY_FILES			= $(C_MANDATORY_FILES:.c=.o)
C_BONUS_FILES	= bonus/ft_printf_bonus.c \
					bonus/src/ft_writechar_bonus.c \
					bonus/src/ft_writenb_bonus.c \
					bonus/src/ft_writestr_bonus.c \
					bonus/src/ft_writepointer_bonus.c \
					bonus/src/ft_writenil_bonus.c \
					bonus/src/ft_writenull_bonus.c \
					bonus/src/ft_writehex_bonus.c \
					bonus/src/ft_fillchar_bonus.c

O_BONUS_FILES			= $(C_BONUS_FILES:.c=.o)
O_FILES_ALL		= $(O_MANDATORY_FILES) $(O_BONUS_FILES)
D_FILES = $(O_FILES_ALL:.o=.d)

all: $(NAME)

$(NAME): $(O_MANDATORY_FILES) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -rcs $@ $(O_MANDATORY_FILES)

bonus: $(BONUS_DONE)

$(BONUS_DONE): $(O_BONUS_FILES) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(O_BONUS_FILES)
	touch $(BONUS_DONE)

clean:
	rm -rf $(O_FILES_ALL) $(BONUS_DONE) $(D_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(D_FILES)