#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
// va_list, va_arg, va_start, va_end
# include <stdarg.h>
// write
# include <unistd.h>
//libft
//# include "../lib/libft/libft.h"

# define INT_MIN -2147483648
# define UINT_MAX 4294967295

# define MODIFIERS "cspdiuxX%"

# define HEX_LOW_BASE "0123456789abcdef"
# define HEX_UP_BASE "0123456789ABCDEF"


int	ft_printf(const char *format, ...);

int print_dispatcher(char c, va_list ap);

int print_percent();

int print_pointer(void *p);


int print_unsigned(unsigned int n);

int print_hex_upper(unsigned int n);

int print_hex(unsigned int n);

int print_string(char *s);

int print_char(char c);

int print_int(int n);

int print_nb_base(unsigned long long n, char *base);

#endif
