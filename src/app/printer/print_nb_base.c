#include "../../ft_printf.h"

int print_int_base(int number, int base, char *base_str) {
  int characters_printed;

  characters_printed = 0;
  if (number < 0) {
    characters_printed += print_char('-');
    if (-(number / base) > 0)
      characters_printed += print_int_base(-(number / base), base, base_str);
    number = -(number % base);
  }
  if (number >= base) {
    characters_printed += print_int_base(number / base, base, base_str);
    characters_printed += print_char(base_str[number % base]);
  } else
    characters_printed += print_char(base_str[number]);
  return (characters_printed);
}

int print_uint_base(unsigned int number, int base, char *base_str) {
  int characters_printed;

  characters_printed = 0;
  if (number >= (unsigned int)base) {
    characters_printed += print_uint_base(number / base, base, base_str);
    characters_printed += print_char(base_str[number % base]);
  } else
    characters_printed += print_char(base_str[number]);
  return (characters_printed);
}
