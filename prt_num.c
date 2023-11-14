#include "main.h"

/**
 * prt_num - Prints number of
 * any base
 * @n: Number passed
 * @base: The base of output number
 * Return: Length of output
 */

int prt_num(long int n, int base)
{
	int len = 0;
	unsigned long int num = n;
	static char *symbols = "0123456789abcdef";
	static char buff[40], *ptr;
	char neg = '\0';

	/* Check if neg */
	if (n < 0)
	{
		num = -n;
		neg = '-';
	}

	ptr = &buff[40];
	*ptr = '\0';

	do {
		*(--ptr) = symbols[num % base];
		num /= base;
	} while (num);
	/* put the negative if exists */
	if (neg)
		*(--ptr) = neg;

	/* Write to the buffer incrment */
	while (ptr && *ptr)
		len += write(1, ptr++, 1);

	return (len);
}
