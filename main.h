#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct func_f - function-formatter pairs of data
 * @spc: The formatter
 * @f: Function pointer to
 * the function associated
 */

typedef struct func_f
{
	char spc;
	int (*f)(va_list);
} func_f;

int _printf(const char *format, ...);
int print_char(va_list);
int print_str(va_list);
int print_37(va_list);

#endif
