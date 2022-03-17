#include "main.h"

/**
 * print_number - prints an integer
 *
 * Return: void
 *
 * @n: integer parameter
 */

void print_number(int n)
{
	unsigned int doubles, single, i = n;
	double j = 1;

	if (n == 0)
	_putchar('0');
	else
	{
		if (n < 0)
		{
			i = n * -1;
			_putchar('-');
		}
		while (j <= i)
		j *= 10;
		doubles = j / 10;

		while (doubles >= 1)
		{
			single = i / doubles;
			_putchar(single + 0);
			i = (i - (doubles * single));
			doubles /= 10;
		}
	}
}
