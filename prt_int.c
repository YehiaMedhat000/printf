#include "main.h"

/**
 * prt_int - Prints integer base 10
 * @args: Dynamic arguments list
 * Return: Length of output
 */

int prt_int(va_list args)
{
	int num;

	num = va_arg(args, long int);
	if (num)
		return (print_num(num, 10));
	return (0);
}
