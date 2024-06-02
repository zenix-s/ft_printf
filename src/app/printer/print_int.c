/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:26 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 19:28:19 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_int(int number)
{
	int	characters_printed;

	characters_printed = 0;
	if (number < 0)
	{
		characters_printed += print_char('-');
		if (-(number / 10) > 0)
			characters_printed += print_int(-(number / 10));
		number = -(number % 10);
	}
	if (number >= 10)
	{
		characters_printed += print_int(number / 10);
		characters_printed += print_char(DEC_BASE[number % 10]);
	}
	else
		characters_printed += print_char(DEC_BASE[number]);
	return (characters_printed);
}
