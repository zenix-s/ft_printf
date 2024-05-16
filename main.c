/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:21:55 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 16:42:15 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// ft_printf("Hello, World!\n");
	// ft_printf("Hello, %s!\n", "World");
	// ft_printf("Hello, %d!\n", 42);
	ft_printf("Hello, %x!\n", -15);
	// ft_printf("Hello, %X!\n", -15);
	// printf("og printf, %x!\n", -15);
	// ft_printf("Hello, %p!\n", &main);
	// ft_printf("Hello, %c!\n", 'W');
	// ft_printf("Hello, %u!\n", 42);
	// ft_printf("Hello, %i!\n", -9);
	// ft_printf("Hello, %%!\n");
	return (0);
}
