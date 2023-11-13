#include "main.h"

/**
 * prt_char - Prints character
 * @args: Dynamic arguments list
 * Return: Length of output (1)
 * (0) otherwise
 */

int prt_char(va_list args)
{
	int c = va_arg(args, int);

	if (c)
		return (write(1, &c, 1));
	return (0);
}
