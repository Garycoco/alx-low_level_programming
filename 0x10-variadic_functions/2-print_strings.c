#include <stdarg.h>
#include <stdio.h>

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

	if (n == 0)
		return;
	
	for (; i < n; i++)
	{
		str = va_arg(va, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
