/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:21:55 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 21:10:03 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"

#include <stdio.h>
int	main(void)
{
	ft_printf("Hello, World!\n");
	ft_printf("Hello s, %s!\n", "World");
	ft_printf("Hello d, %d!\n", 42);
	ft_printf("Hello x, %#x!\n", 14);
	printf("print x, %#x!\n", 14);
	ft_printf("Hello X, %X!\n", 15);
	ft_printf("Hello p, %p!\n", &main);
	ft_printf("Hello c, %c!\n", 'W');
	ft_printf("Hello u, %u!\n", 42);
	ft_printf("Hello i, %i!\n", -9);
	ft_printf("Hello %, %%!\n");
	return (0);
}
