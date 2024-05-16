/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:05 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 12:06:43 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		print_count;
	va_list	ap;
	int		i;

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
			print_count += print_char(format[i]);
		i++;
	}
	va_end(ap);
	return (print_count);
}
