ft_printf

# ft_printf

## Description

Recreación de la función printf de la librería estándar de C.


## Functions

### print_char
---

Escribe un carácter en la salida estándar.
```c
int print_char(char c)
{
    return (write(1, &c, 1));
}
```

### print_string
---

Escribe una cadena de caracteres en la salida estándar.
```c 
int	print_string(char *s)
{
	int	count;
	int	len;

	len = 0;
	count = 0;
	if (!s)
		return (print_string("(null)"));
	while (s[len])
		len++;
	count += write(1, s, len);
	return (count);
}
```
