#include "./include/ft_printf.h"

// int ft_printf(char *str, ...) {
// 	va_list	ap;
// 	va_start(ap, str);
// 	char *s = va_arg(ap, char *);
// 	printf("%s", s);
// 	int x = va_arg(ap, int);
// 	printf("%d", x);
// 	va_end(ap);
//   return (0);
// }
// int ft_printf(char *str, ...) {
//   va_list	ap;
//   int i;
//   int d;
//   char *s;
//
//   i = 0;
//   va_start(ap, str);
//   while(str[i])
//   {
// 	if(str[i] == 's')
// 	{
// 		s = va_arg(ap, char *);
// 		printf("%s", s);
// 	}
// 	else if(str[i] == 'd')
// 	{
// 		d = va_arg(ap, int);
// 		printf("%d", d);
// 	}
// 	i++;
//   }
//
//   return (0);
// }
//
int	main(void)
{
	int	x;
	printf("hola %");
//	x = ft_printf("Hola\n%c%s%d", 'c', "hello", 42);
	return (0);
}
