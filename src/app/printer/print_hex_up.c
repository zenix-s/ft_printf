/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:22 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 19:28:19 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_hex_upper(unsigned int number)
{
	int	characters_printed;

	characters_printed = 0;
	if (number >= 16)
	{
		characters_printed += print_hex_upper(number / 16);
		characters_printed += print_hex_upper(number % 16);
	}
	else
		characters_printed += print_char(HEX_UP_BASE[number]);
	return (characters_printed);
}
