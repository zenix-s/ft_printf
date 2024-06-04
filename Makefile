# DIRECTORIES

SRCP = ./src/app/
SRCPRINTERS = ./src/app/printer/
SRCPDISPATCHER = ./src/app/dispatcher/

SRCS = $(notdir $(wildcard $(SRCP)*.c))
SRCSPRINTERS = $(notdir $(wildcard $(SRCPRINTERS)*.c))
SRCSDISPATCHER = $(notdir $(wildcard $(SRCPDISPATCHER)*.c))

SRC = $(addprefix $(SRCP), $(SRCS))
SRC += $(addprefix $(SRCPRINTERS), $(SRCSPRINTERS))
SRC += $(addprefix $(SRCPDISPATCHER), $(SRCSDISPATCHER))

# VARIABLES 

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJS = $(SRC:.c=.o)

# COLORS


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
