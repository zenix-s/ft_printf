#include "../include/ft_printf.h"

int print_hex_upper(unsigned int n)
{
  int count;

  count = 0;
  if (n >= 16)
  {
    count += print_hex_upper(n / 16);
    count += print_hex_upper(n % 16);
  }
  else
  {
    write(1, &HEX_UP_BASE[n], 1);
    count++;
  }
  return (count);
}
