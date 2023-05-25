#include "main.h"

/**
 * _printf - like standard printf
 * @format: string to print with formating
 *
 * Return: printed char count
 */
int _printf(const char *format, ...)
{
	int i = 0, chk = 0, retcount = 0;
	va_list args;
	formating fmtspec[] = {
		{"%", formatMod},
		{"\\", formatMod},
		{NULL, NULL}};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == *(fmtspec[0].ltr))
		{
			chk += fmtspec[0].type(&args, format, i);
			if (chk == -1)
				return (-1);
			retcount += chk, i++;
			while (format[i] == ' ')
				i++;
			chk = 1;
		}
		if (!chk)
			write(1, &format[i], 1), retcount++;

		chk = 0, i++;
	}

	va_end(args);
	return (retcount);
}

