#include "../include/ft_printf.h"

int print_int(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n >= 10)
	{
		count += print_int(n / 10);
		count += print_int(n % 10);
	}
	else
	{
		n = n + '0';
		write(1, &n, 1);
		count++;
	}
	return (count);
}
