#include "main.h"

/**
 * print_37 - Prints percentage sign
 * @args: Dynamic arguments list
 * Return: 1 (success)
 */

int print_37(va_list args)
{
	/* Avoiding unused var error */
	va_list params;
	int c = 37;

	params = args;
	(void)params;
	return (write(1, &c, 1));
}
