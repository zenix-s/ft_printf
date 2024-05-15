/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:21:55 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 00:14:11 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"

#include <stdio.h>
int	main(void)
{
	ft_printf("Hello, World!\n");
	ft_printf("Hello, %s!\n", "World");
	ft_printf("Hello, %d!\n", 42);
	ft_printf("Hello, %x!\n", 42);
	ft_printf("Hello, %X!\n", 15);
	ft_printf("Hello, %p!\n", &main);
	ft_printf("Hello, %c!\n", 'W');
	ft_printf("Hello, %u!\n", 42);
	ft_printf("Hello, %i!\n", -9);
	ft_printf("Hello, %%!\n");

  ft_printf("\033[94mHello, World!\033[0m");

	return (0);
}
