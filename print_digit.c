#include "main.h"

/**
 * print_digit - print digits passed from _printf
 * @args: argument pointer
 *
 * Return: count of digits and signs printed
 */
int print_digit(va_list *args)
{
	int rc = 0, n = va_arg(*args, int), x = n, ld = 1;
	char c;

	x = (x < 0) ? -x : x;
	while (x > 0)
		x /= 10, rc++;

	if (n < 0)
	{
		write(1, "-", 1);
		rc++;
		ld = n % 10;
		n = n / -10;
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (rc);
	}
	getdigits(n);
	if (ld < 0)
	{
		c = '0' - ld;
		write(1, &c, 1);
	}
	return (rc);
}
