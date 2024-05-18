/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:05 by serferna          #+#    #+#             */
/*   Updated: 2024/05/16 21:08:15 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int sharp_flag(char c) {
  if (c == 'x')
    return (print_string("0x"));
  else if (c == 'X')
    return (print_string("0X"));
  else
    return (0);
}

int ft_printf(const char *format, ...) {
  int characters_printed;
  va_list ap;
  int i;

  i = 0;
  characters_printed = 0;
  va_start(ap, format);
  while (format[i]) {
    if (format[i] == '%') {
      i++;
      if (format[i] == '#') {
        characters_printed += sharp_flag(format[i + 1]);
        i++;
      }
      characters_printed += case_dispatcher(format[i], ap);
    } else
      characters_printed += print_char(format[i]);
    i++;
  }
  va_end(ap);
  return (characters_printed);
}
