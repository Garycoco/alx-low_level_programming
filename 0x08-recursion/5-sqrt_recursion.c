#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * Return: the natural square root
 *
 * @n: the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds the natural square root
 *
 * Return: the square root
 *
 * @i: integer parameter
 * @j: integer parameter
 */

int actual_sqrt_recursion(int i, int j)
{
	if (i * i > j)
	{
		return (-1);
	}
	if (i * i == j)
	{
		return (i);
	}

	return (actual_sqrt_recursion(j, i + 1));
}