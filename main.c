/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:21:55 by serferna          #+#    #+#             */
/*   Updated: 2024/06/03 12:27:45 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"

int	main(void)
{
	// Solo texto
	ft_printf("Hello, World!\n");
	// Texto + string
	ft_printf("Hello s, %s!\n", "World");
	// Texto + caracter
	ft_printf("Hello c, %c!\n", 'W');
	// Texto + int
	ft_printf("Hello d, %d!\n", 42);
	// Texto + int negativo
	ft_printf("Hello i, %i!\n", -9);
	// Texto + hexadecimal en minusculas
	ft_printf("Hello x, %x!\n", 14);
	// Texto + hexadecimal en mayusculas
	ft_printf("Hello X, %X!\n", 15);
	// Texto + puntero
	ft_printf("Hello p, %p!\n", &main);
	// Texto + unsigned int
	ft_printf("Hello u, %u!\n", 42);
	// Texto + porcentaje
	ft_printf("Hello %, %%!\n");
	return (0);
}
