#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list ap;
	char *str;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch_type(format[i + 1], ap, &str);
			i = i + 2;
		}
		else
		{
			write(0, &format[i], 1);
			i++;
		}
	}
	va_end(ap);
	return (1);
}
