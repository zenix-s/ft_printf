# DIRECTORIES

SRCP = ./src/app/
SRCPRINTERS = ./src/app/printer/
SRCS = $(notdir $(wildcard $(SRCP)*.c))
SRCSPRINTERS = $(notdir $(wildcard $(SRCPRINTERS)*.c))

SRC = $(addprefix $(SRCP), $(SRCS))
SRC += $(addprefix $(SRCPRINTERS), $(SRCSPRINTERS))

# VARIABLES 

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
