#include "main.h"

/**
 * formatMod - checks the format modifer
 * @args: argument pointer
 * @format: string to print
 * @i: the location of the modifer
 *
 * Return: count of anything printed
 */
int formatMod(va_list *args, const char *format, int i)
{
	int j = 0, x = 0;
	formating fmtmods[] = {
		{"s", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{NULL, NULL}};

	i++;
	if (format[i] == ' ')
		while (format[i] == ' ')
			i++;
	if (format[i] == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	if (format[i] == 'n')
	{
		write(1, "\n", 1);
		return (1);
	}
	while (fmtmods[j].type != NULL && *(fmtmods[j].ltr) != format[i])
		j++;
	if (fmtmods[j].type == NULL)
		return (-1);
	x = fmtmods[j].type(args);
	return (x);
}
