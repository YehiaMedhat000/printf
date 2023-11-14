#include "main.h"

/**
 * _print_string - function for printing string and handling %s
 * @list: list
 * Return: c wish containes string len
 **/

int _print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int c;

	c = printf((str != NULL) ? str : "(null)");

	return (c);
}
