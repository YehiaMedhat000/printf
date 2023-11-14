#include "main.h"

/**
 * buf_inc - increment both index and overflow.
 * @buf: pointer to a buffer.
 */
void buf_inc(buffer *buf)
{
	if (!buf)
		return;
	buf->index++;
	buf->overflow++;
}

/**
 * _print_rev_string - function reverse string %r
 *
 * @list: list
 *
 * Return: c wish containes string len
 **/

int _print_rev_string(va_list list)
{
	int i, c;
	char *p;


	p = va_arg(list, char *);
	c = _strlen(p);

	for (i = c - 1; i >= 0; i--)
		_putchar(p[i]);

	return (c);
}