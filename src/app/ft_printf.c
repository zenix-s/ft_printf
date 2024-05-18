/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:05 by serferna          #+#    #+#             */
/*   Updated: 2024/05/19 00:10:34 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		characters_printed;
	va_list	ap;
	int		i;

	i = 0;
	characters_printed = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			characters_printed += case_dispatcher(format[i], ap);
		}
		else
			characters_printed += print_char(format[i]);
		i++;
	}
	va_end(ap);
	return (characters_printed);
}
