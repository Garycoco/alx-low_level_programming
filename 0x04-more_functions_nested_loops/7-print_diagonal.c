#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * Return: void
 *
 * @n: integer parameter which is the number of
 * times we print the character \
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int times, space;

		for (times = 1; times <= n; times++)
		{
			for (space = 1; space <= times; space++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
