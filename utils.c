#include "main.h"

/* Yehia Medhat And Rida Essahi */

/**
 * _strlen: Calculate str length
 * @str: String passed
 * Return: length of str
 */

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	str -= len;
	return (len);
}

/**
 * prt - Prints a char
 *
int print
