#include "../include/ft_printf.h"

int print_dispatcher(char c, va_list ap)
{
	if (c == 'd' || c == 'i')
		return (print_int(va_arg(ap, int)));
	else if (c == 'c')
		return (print_char(va_arg(ap, int)));
	else if (c == 's')
		return (print_string(va_arg(ap, char *)));
	else if (c == 'x')
		return (print_hex(va_arg(ap, unsigned int)));
	else if (c == 'X')
		return (print_hex_upper(va_arg(ap, unsigned int)));
	else if (c == 'u')
		return (print_unsigned(va_arg(ap, unsigned int)));
	else if (c == 'p')
		return (print_pointer(va_arg(ap, void *)));
	else if (c == '%')
		return (print_percent());
	else
		return (0);
}
