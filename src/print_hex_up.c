/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:22 by serferna          #+#    #+#             */
/*   Updated: 2024/05/15 20:23:28 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_hex_upper(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += print_hex_upper(n / 16);
		count += print_hex_upper(n % 16);
	}
	else
		count += print_char(HEX_UP_BASE[n]);
	return (count);
}
