# DIRECTORIES

SRCP = ./
SRCS_PRINTF = ft_printf.c
SRCS = $(addprefix $(SRCP),$(SRCS_PRINTF))

OBJS = $(SRCS:.c=.o)


