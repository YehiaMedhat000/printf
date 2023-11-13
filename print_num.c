#include "main.h"

/**
 * print_num - Prints number of
 * any base
 * @args: Dynamic argument list
 * @base: The base of output number
 * Return: Length of output
 */

int print_num(long int n, int base)
{
	int len = 0;
	unsigned long int num = n;
	char *symbols = "0123456789abcdef";
	char *buff, *ptr;
	char negative = '\0';

    	buff = (char *)malloc(sizeof(char) * 50);
	if (!buff)
	{
		return (0);
	}
    	ptr = (char *)malloc(sizeof(char) * 50);
	if (!ptr)
	{
		return (0);
	}

	if (n < 0)
	{
		num = -n;
		negative = '-';
	}
	
	ptr = buff;
	*ptr = '\0';

	while (num)
	{
		*(--ptr) = symbols[num % base];
		num /= base;
	}
	/* put the negative if exists */
	if (negative)
		*(--ptr) = negative;

	/* Write to the buffer incrment */
	while (ptr && *ptr)
		len += write(1, ptr++, 1);

	return (len);
}
