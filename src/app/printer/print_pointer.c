/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:32 by serferna          #+#    #+#             */
/*   Updated: 2024/06/03 17:56:19 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int print_pointer(unsigned long long pointer) {
  int characters_printed;
  char hex_value[17];
  int i;

  characters_printed = 0;
  i = 0;
  if (pointer == 0)
    return (print_string("(nil)"));
  characters_printed += print_string("0x");
  while (pointer != 0) {
    hex_value[i] = HEX_LOW_BASE[pointer % 16];
    pointer /= 16;
    i++;
  }
  while (i > 0) {
    i--;
    characters_printed += print_char(hex_value[i]);
  }
  return (characters_printed);
}
