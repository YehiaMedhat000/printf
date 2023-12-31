#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("USHRT_MAX:%hu\n", USHRT_MAX);
	len2 = printf("USHRT_MAX:%hu\n", USHRT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("USHRT_MAX:%ho\n", USHRT_MAX);
	len2 = printf("USHRT_MAX:%ho\n", USHRT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("USHRT_MAX:%hx\n", USHRT_MAX);
	len2 = printf("USHRT_MAX:%hx\n", USHRT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("USHRT_MAX:%hX\n", USHRT_MAX);
	len2 = printf("USHRT_MAX:%hX\n", USHRT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
