#include "../include/ft_printf.h"

int print_unsigned(unsigned int n)
{
  int count;

  count = 0;
  if (n >= 10)
  {
    count += print_unsigned(n / 10);
    count += print_unsigned(n % 10);
  }
  else
  {
    n = n + '0';
    write(1, &n, 1);
    count++;
  }
  return (count);
}
