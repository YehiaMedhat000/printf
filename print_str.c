#include "main.h"

/**
 * print_str - Prints str
 * @args: Argument list
 * Return: length of output
 */

int print_str(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);
	len = strlen(str);
	/* str != null && str[0] != '\0' */
	if (str)
	{
		return (write(1, str, len));
	}
	return (0);
}
