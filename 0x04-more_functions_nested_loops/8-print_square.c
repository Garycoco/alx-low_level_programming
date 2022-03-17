#include "main.h"

/**
 * print_square - Prints a square
 *
 * Return: void
 *
 * @size: an integer parameter for the size
 * of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int times = 0, length;

		while (times < size)
		{
			length = 1;

			while (length < size)
			{
				putchar('#');

				length++;
			}

			putchar('#');
			putchar('\n');
			times++;
		}
	}
}
