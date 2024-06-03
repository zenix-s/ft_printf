/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:24:16 by serferna          #+#    #+#             */
/*   Updated: 2024/06/03 17:51:44 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// va_list, va_arg, va_start, va_end
# include <stdarg.h>
// write
# include <unistd.h>

# define MODIFIERS "cspdiuxX%"
# define HEX_LOW_BASE "0123456789abcdef"
# define HEX_UP_BASE "0123456789ABCDEF"
# define DEC_BASE "0123456789"

int	ft_printf(const char *format, ...);

int	dispatcher(const char **c, va_list ap, int *x);

int	print_percent(void);

int	print_pointer(unsigned long long p);

int	print_string(char *s);

int	print_char(char c);

int	print_int_base(int number, int base, char *base_str);

int	print_uint_base(unsigned int number, int base, char *base_str);

#endif
