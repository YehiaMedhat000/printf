#include "main.h"

/**
 * prt_str - Prints str
 * @args: Argument list
 * Return: length of output
 */

int prt_str(va_list args)
{
	int len;
	char *str = va_arg(args, char *);

	len = strlen(str);
	/* str != null && str[0] != '\0' */
	if (str)
		return (write(1, str, len));
	else
		return (write(1, &"(null)", 6));
	return (0);
}
