# DIRECTORIES

SRCP = ./src/
SRCS = $(notdir $(wildcard $(SRCP)*.c))

SRC = $(addprefix $(SRCP), $(SRCS))

# VARIABLES 

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
INCLUDES = include

OBJS = $(SRC:.c=.o)

# COLORS
RED = \033[0;31m
GREEN = \033[0;32m
BLUR = \033[0;34m

RESET = \033[0m

$(OBJS): %.o: %.c
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(BLUE)libftprintf.a created$(RESET)"

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
