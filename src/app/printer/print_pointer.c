/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:32 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 17:46:47 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_pointer(unsigned long long p)
{
	int		count;
	char	hex_value[17];
	int		i;

	count = 0;
	i = 0;
	if (p == 0)
		return (print_string("(nil)"));
	count += print_string("0x");
	while (p != 0)
	{
		hex_value[i++] = HEX_LOW_BASE[p % 16];
		p /= 16;
	}
	while (i > 0)
		count += print_char(hex_value[--i]);
	return (count);
}
