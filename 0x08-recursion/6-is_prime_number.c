#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 *
 * Return: 1 if prime and 0 if not
 *
 * @n: an integer parameter
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - finds the prime number
 *
 * Return: the prime number
 *
 * @n: integer variable
 * @y: integer variable
 */

int actual_prime(int n, int y)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % 1 == 0 && i > 0)
	{
		return (0);
	}

	return (actual_prime(n, i - 1));
}
