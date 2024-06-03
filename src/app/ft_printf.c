/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:05 by serferna          #+#    #+#             */
/*   Updated: 2024/06/03 17:52:00 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		characters_printed;
	va_list	arguments;
	int		i;

	i = 0;
	characters_printed = 0;
	va_start(arguments, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			characters_printed += dispatcher(&format, arguments, &i);
		}
		else
			characters_printed += print_char(format[i]);
		i++;
	}
	va_end(arguments);
	return (characters_printed);
}
