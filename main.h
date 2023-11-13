#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#define BUF_SIZE 1024

/* By Yehia Medhat And Rida Essahi */

/**
 * struct params - Parameters datatype
 * for handling different cases
 * @unsigned_: Check if unsigned
 * @plus_: Check if plus
 * @space_: Check for spaces
 * @hash_: Check for hashes
 * @zero_: Check for zeros
 * @minus_: Check for minus
 * @width_: Check for width
 * @percision_: Check for precision
 * @h_mod: Check for sth
 * @l_mod: Check if long
 */

typedef struct params
{
	int unsigned_ : 2;
	int plus_ : 2;
	int space_ : 2;
	int hash_ : 2;
	int zero_ : 2;
	int minus_ : 2;
	int width_ : 2;
	int precision_ : 2;
	int h_mod : 2;
	int l_mod : 2;

} prm;

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

/* Main function */
int _printf(const char *format, ...);

/* First task functions */
int prt_char(va_list);
int prt_str(va_list);
int prt_int(va_list);
int prt_num(long int, int);


#endif
