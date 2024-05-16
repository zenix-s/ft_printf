/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:26 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 12:06:56 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_int(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count += print_char('-');
		if (-(nbr / 10) > 0)
			count += print_int(-(nbr / 10));
		nbr = -(nbr % 10);
	}
	if (nbr >= 10)
	{
		count += print_int(nbr / 10);
		count += print_char(DEC_BASE[nbr % 10]);
	}
	else
		count += print_char(DEC_BASE[nbr]);
	return (count);
}
