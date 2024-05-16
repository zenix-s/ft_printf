/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:16 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 19:28:19 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	case_dispathcer(char c, va_list ap)
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
		return (print_pointer(va_arg(ap, unsigned long long)));
	else if (c == '%')
		return (print_percent());
	else
		return (0);
}
