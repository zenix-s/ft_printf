/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_dispatcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:16 by serferna          #+#    #+#             */
/*   Updated: 2024/06/02 18:53:18 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	sharp_flag(char character, va_list arguments_pointer)
{
	int				characters_printed;
	unsigned int	n;

	characters_printed = 0;
	if (character == 'x')
	{
		n = va_arg(arguments_pointer, unsigned int);
		if (n != 0)
			characters_printed += print_string("0x");
		characters_printed += print_hex(n);
		return (characters_printed);
	}
	else if (character == 'X')
	{
		n = va_arg(arguments_pointer, unsigned int);
		if (n != 0)
			characters_printed += print_string("0X");
		characters_printed += print_hex_upper(n);
		return (characters_printed);
	}
	return (0);
}

int	dispatcher(const char **format, va_list arguments_pointer, int *position)
{
	while ((*format)[*position] == ' ')
		(*position)++;
	if ((*format)[*position] == 'd' || (*format)[*position] == 'i')
		return (print_int(va_arg(arguments_pointer, int)));
	else if ((*format)[*position] == 'c')
		return (print_char(va_arg(arguments_pointer, int)));
	else if ((*format)[*position] == 's')
		return (print_string(va_arg(arguments_pointer, char *)));
	else if ((*format)[*position] == 'x')
		return (print_hex(va_arg(arguments_pointer, unsigned int)));
	else if ((*format)[*position] == 'X')
		return (print_hex_upper(va_arg(arguments_pointer, unsigned int)));
	else if ((*format)[*position] == 'u')
		return (print_unsigned(va_arg(arguments_pointer, unsigned int)));
	else if ((*format)[*position] == 'p')
		return (print_pointer(va_arg(arguments_pointer, unsigned long long)));
	else if ((*format)[*position] == '%')
		return (print_percent());
	else if ((*format)[*position] == '#')
	{
		(*position)++;
		return (sharp_flag((*format)[*position], arguments_pointer));
	}
	else
		return (0);
}
