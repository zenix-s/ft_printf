/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:20 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 16:48:04 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_hex(unsigned int n)
{
	int	count;

	ft_printf("print_hex\n");
	ft_printf("n: %d\n", n);
	ft_printf("u: %u\n", n);
	count = 0;
	if (n >= 16)
	{
		ft_printf("n / 16: %d\n", n / 16);
		count += print_hex(n / 16);
		count += print_hex(n % 16);
	}
	else
	{
		ft_printf("HEX_LOW_BASE[n]: %c\n", HEX_LOW_BASE[n]);
		count += print_char(HEX_LOW_BASE[n]);
	}
	return (count);
}
