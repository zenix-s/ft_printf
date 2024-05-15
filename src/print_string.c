/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:23:36 by serferna          #+#    #+#             */
/*   Updated: 2024/05/15 23:27:03 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int print_string(char *s) {
  int count;
  int len;

  len = 0;
  count = 0;
  if (!s)
    return (print_string("(null)"));
  while (s[len])
    len++;
  count += write(1, s, len);
  return (count);
}
