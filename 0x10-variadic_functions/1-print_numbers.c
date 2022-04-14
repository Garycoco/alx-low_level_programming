#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;

	if (n == 0 || separator == NULL)
		return;
	va_start(va, n);
	for (; i < n (n - 1); i++)
	{
		printf("%d%s", va_arg(va, int), separator);
	}
	printf("%d\n", va_arg(va, int));
	va_end(va);
}
