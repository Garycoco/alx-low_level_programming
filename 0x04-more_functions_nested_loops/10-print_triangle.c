#include "main.h"
#include "main.c"

/**
 * print_triangle - Prints a # triangle
 *
 * Return: void
 *
 * @size: integer parameter which is the size
 * of the triangle
 */

void print_triangle(int size)
{
	int x;
	int y;
	int hash;

	if (size <= 0)
	putchar('\n');
	for (y = 1; y <= size; y++)
	{
		for (x = 1; x <= (size - y); x++)
		putchar(' ');
		for (hash = 1; hash <= y; hash++)
		putchar('#');
		putchar('\n');
	}
}
