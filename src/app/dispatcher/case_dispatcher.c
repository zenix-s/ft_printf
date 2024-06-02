/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_dispatcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:16 by serferna          #+#    #+#             */
/*   Updated: 2024/05/20 21:04:36 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int sharp_flag(char c, va_list ap) {
  int count;
  unsigned int n;

  count = 0;
  if (c == 'x') {
    n = va_arg(ap, unsigned int);
    if (n != 0)
      count += print_string("0x");
    count += print_hex(n);
    return (count);
  } else if (c == 'X') {
    n = va_arg(ap, unsigned int);
    if (n != 0)
      count += print_string("0X");
    count += print_hex_upper(n);
    return (count);
  }
  return (0);
}

int case_dispatcher(const char **c, va_list ap, int *x) {
  while ((*c)[*x] == ' ')
    (*x)++;
  if ((*c)[*x] == 'd' || (*c)[*x] == 'i')
    return (print_int(va_arg(ap, int)));
  else if ((*c)[*x] == 'c')
    return (print_char(va_arg(ap, int)));
  else if ((*c)[*x] == 's')
    return (print_string(va_arg(ap, char *)));
  else if ((*c)[*x] == 'x')
    return (print_hex(va_arg(ap, unsigned int)));
  else if ((*c)[*x] == 'X')
    return (print_hex_upper(va_arg(ap, unsigned int)));
  else if ((*c)[*x] == 'u')
    return (print_unsigned(va_arg(ap, unsigned int)));
  else if ((*c)[*x] == 'p')
    return (print_pointer(va_arg(ap, unsigned long long)));
  else if ((*c)[*x] == '%')
    return (print_percent());
  else if ((*c)[*x] == '#') {
    (*x)++;
    return (sharp_flag((*c)[*x], ap));
  } else
    return (0);
}
