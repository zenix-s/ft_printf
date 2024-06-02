/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:21:55 by serferna          #+#    #+#             */
/*   Updated: 2024/06/02 18:17:53 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdio.h>

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
	// BONUS
	ft_printf("\n--------------------");
	ft_printf("\nBONUS\n");
	ft_printf("--------------------\n\n");
	// BONUS # flag
	ft_printf("# flag\n");
	ft_printf("Hello #x, %#x!\n", 0);
	printf("print #x, %#x!\n", 0);
	ft_printf("Hello #X, %#X!\n", -15);
	printf("print #X, %#X!\n", -15);
	ft_printf("\n");
	ft_printf("space flag\n");
	// BONUS space flag 1 espacio
	ft_printf("Hello d, % d!\n", 42);
	printf("print d, % d!\n", 42);
	// BONUS space flag 2 espacios
	ft_printf("Hello i, %  d!\n", -9);
	printf("print i, %  d!\n", -9);
	return (0);
}
