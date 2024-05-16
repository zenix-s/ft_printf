/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:20 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 17:44:55 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_hex(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += print_hex(n / 16);
		count += print_hex(n % 16);
	}
	else
		count += print_char(HEX_LOW_BASE[n]);
	return (count);
}
