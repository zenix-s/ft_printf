/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:32 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 12:06:56 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_pointer(unsigned long long p)
{
	int						count;
	unsigned long long int	ptr_value;
	char					hex_value[17];
	int						i;

	count = 0;
	i = 0;
	if (p == 0)
		return (print_string("(nil)"));
	count += print_string("0x");
	ptr_value = (unsigned long long int)p;
	while (ptr_value != 0)
	{
		hex_value[i++] = HEX_LOW_BASE[ptr_value % 16];
		ptr_value /= 16;
	}
	while (i > 0)
		count += print_char(hex_value[--i]);
	return (count);
}
