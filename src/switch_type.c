#include "../include/ft_printf.h"

int	switch_type(int type, va_list ap, char **str)
{
	int	characters_print;

	characters_print = 0;
	if (type == 'c')
	{
		// characters_print = write(0, "\nchr\n", 5);
		//printf("chr: %c\n", va_arg(ap, int));

		ft_putchar_fd(va_arg(ap, int), 0);
	}
	else if (type == 's')
	{
		//characters_print = write(0, "\nstr\n", 5);
		printf("str: %s\n", va_arg(ap, char *));
	}
	else if (type == 'd' | type == 'i')
	{
		//characters_print = write(0, "\nnbr\n", 5);
		printf("nbr: %d\n", va_arg(ap, int));
	}
	else if (type == 'p')
	{
		//characters_print = write(0, "\nptr\n", 5);
		printf("ptr: %p\n", va_arg(ap, void *));
	}
	else if (type == 'u')
	{
		characters_print = write(0, "\nunb\n", 5);
	}
	else if (type == 'x')
	{
		characters_print = write(0, "\nlhx\n", 5);
	}
	else if (type == 'X')
	{
		characters_print = write(0, "\nuhx\n", 5);
	}
	else if (type == '%')
	{
		characters_print = write(0, "\nper\n", 5);
	}
	return (characters_print);
}
