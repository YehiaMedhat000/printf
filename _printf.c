#include "main.h"

/**
 * _printf - Mock printf function
 * @format: Formatted string to print
 * Return: length of output
 */

int _printf(const char *format, ...)
{
	va_list(args);
	int i = 0, len = 0, format_len = 0;

	func_f ff[] = {
		{'c', print_char},
		{'s', print_str}
	};

	va_start(args, format);

	format_len = strlen(format);
	/* Errors handling */
	if (!format || (*(format) == '%' && *(format + 1) == '\0') || !format_len)
		return (-1);

	/* The function core */
	while (*format)
	{
		/* Formatters handling */
		while (*format == '%')
		{
			if (*(format + 1) == (ff[i].spc))
			{
				len += ff[i].f(args);
				format += 2;
			}
			else if (*(format + 1) == '%')
			{
				len += write(1, format + 1, 1);
				format += 2;
			}
			i++;
		}
		len += write(1, format++, 1);
	}
	va_end(args);
	return (len);
}
