#include "main.h"
/**
 * _abs - computes the absolute value
 * of an integer
 *
 * @n: An integer parameter
 *
 * Return: Always 0
 */
int _abs(int n)
{
	int i;

	if (n > 0)
	{
		_putchar(n);
		_putchar('\n');
	}
	else
	{
		i = n * -1;

		_putchar(i);
		_putchar('\n');
	}
	return (0);
}
