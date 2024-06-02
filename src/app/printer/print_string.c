/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:36 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 19:28:19 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_string(char *string)
{
	int	characters_printed;
	int	len;

	len = 0;
	characters_printed = 0;
	if (!string)
		return (print_string("(null)"));
	while (string[len])
		len++;
	characters_printed += write(1, string, len);
	return (characters_printed);
}
