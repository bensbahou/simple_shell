#include "main.h"

/**
 * print_string - print argument
 * @args: ponter to arg
 *
 * Return: printed char
 */
int print_string(va_list *args)
{
	char *str = va_arg(*args, char *);
	int len = 0;

	while (str[len] != '\0')
		len++;

	write(1, str, len);
	return (len);
}
