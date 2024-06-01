/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:21:55 by serferna          #+#    #+#             */
/*   Updated: 2024/05/21 18:24:12 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdio.h>

int main(void) {
  ft_printf("Hello, World!\n");
  ft_printf("Hello s, %s!\n", "World");
  ft_printf("Hello d, %d!\n", 42);
  ft_printf("Hello x, %x!\n", 14);
  ft_printf("Hello X, %X!\n", 15);
  ft_printf("Hello p, %p!\n", &main);
  ft_printf("Hello c, %c!\n", 'W');
  ft_printf("Hello u, %u!\n", 42);
  ft_printf("Hello i, %i!\n", -9);
  ft_printf("Hello %, %%!\n");

  ft_printf("\n--------------------");
  ft_printf("\nBONUS\n");
  ft_printf("--------------------\n\n");

  ft_printf("# flag\n");
  ft_printf("Hello #x, %#x!\n", 0);
  printf("print #x, %#x!\n", 0);
  ft_printf("Hello #X, %#X!\n", -15);
  printf("print #X, %#X!\n", -15);

  ft_printf("\n");
  ft_printf("space flag\n");
  ft_printf("Hello d, % d!\n", 42);
  printf("print d, %  d!\n", 42);
  ft_printf("Hello i, %   i!\n", -9);
  printf("print i, %   i!\n", -9);



  return (0);
}
