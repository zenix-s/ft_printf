/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:39 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 19:28:19 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/**
 * @brief Print an unsigned number
 */
int	print_unsigned(unsigned int number)
{
	int	characters_printed;

	characters_printed = 0;
	if (number >= 10)
	{
		characters_printed += print_unsigned(number / 10);
		characters_printed += print_char((number % 10) + '0');
	}
	else
		characters_printed += print_char(number + '0');
	return (characters_printed);
}
