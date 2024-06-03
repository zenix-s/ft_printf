/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_dispatcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:16 by serferna          #+#    #+#             */
/*   Updated: 2024/06/03 17:56:43 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	dispatcher(const char **format, va_list arguments, int *position)
{
	if ((*format)[*position] == 'd' || (*format)[*position] == 'i')
		return (print_int_base(va_arg(arguments, int), 10, DEC_BASE));
	else if ((*format)[*position] == 'c')
		return (print_char(va_arg(arguments, int)));
	else if ((*format)[*position] == 's')
		return (print_string(va_arg(arguments, char *)));
	else if ((*format)[*position] == 'x')
		return (print_uint_base(va_arg(arguments, unsigned int), 16,
				HEX_LOW_BASE));
	else if ((*format)[*position] == 'X')
		return (print_uint_base(va_arg(arguments, unsigned int), 16,
				HEX_UP_BASE));
	else if ((*format)[*position] == 'u')
		return (print_uint_base(va_arg(arguments, unsigned int), 10, DEC_BASE));
	else if ((*format)[*position] == 'p')
		return (print_pointer(va_arg(arguments, unsigned long long)));
	else if ((*format)[*position] == '%')
		return (print_char('%'));
	else
		return (0);
}
