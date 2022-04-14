#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: strings to be printed between numbers
 * @n: number of integers passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;
	char *str;

	for (i = 0; i < n; i++)
	{
		str = va_arg(va, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i != (n - 1) && separator != NULL);
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
