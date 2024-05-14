#include "../include/ft_printf.h"
int print_string(char *s)
{
  int count;

  count = 0;
  if (!s)
  {
    write(1, "(null)", 6);
    return (6);
  }
  while (*s)
  {
    write(1, s, 1);
    s++;
    count++;
  }
  return (count);
}
