/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:20 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 19:28:19 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_hex(unsigned int number)
{
	int	characters_printed;

	characters_printed = 0;
	if (number >= 16)
	{
		characters_printed += print_hex(number / 16);
		characters_printed += print_hex(number % 16);
	}
	else
		characters_printed += print_char(HEX_LOW_BASE[number]);
	return (characters_printed);
}
