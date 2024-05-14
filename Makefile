# DIRECTORIES

SRCP = ./src/
SRCS = $(notdir $(wildcard $(SRCP)*.c))

SRC = $(addprefix $(SRCP), $(SRCS))

SRCS_PRINTF = ./src/ft_printf.c \
							./src/print_char.c \
							./src/print_string.c \
							./src/print_pointer.c \
							./src/print_int.c \
							./src/print_unsigned.c \
							./src/print_hex.c \
							./src/print_hex_up.c \
							./src/print_percent.c \
							./src/print_dispatcher.c \
							./src/print_ng_base.c \


# VARIABLES 

LIBFT = ./lib/libft/libft.a
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
INCLUDES = include


OBJS = $(SRC:.c=.o)

$(OBJS): %.o: %.c
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "libftprintf.a created"

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
