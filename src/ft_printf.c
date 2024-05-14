#include "../include/ft_printf.h"

int ft_printf(const char *format, ...)
{
	int print_count;
	va_list ap;
	int i;

	i = 0;
	print_count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			print_count += print_dispatcher(format[i], ap);
		}
		else
		{
			write(1, &format[i], 1);
			print_count++;
		}
		i++;
	}
	va_end(ap);
	return (print_count);
	
}



