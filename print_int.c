#include "main.h"

/**
 * print_int - Prints integer base 10
 * @args: Dynamic arguments list
 * Return: Length of output
 */

int print_int(va_list args)
{
	long int num;

	num = va_arg(args, long int);
	if (num)
		return (print_num(num, 10));
	return (0);
}
