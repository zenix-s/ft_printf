/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:11 by serferna          #+#    #+#             */
/*   Updated: 2024/06/03 17:56:30 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/**
 * print_char - Print a character
 * @param c: character to print
 * @return: number of characters printed
 */
int	print_char(char character)
{
	return (write(1, &character, 1));
}
