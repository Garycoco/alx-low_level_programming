#include "main.h"
#include "main.c"

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
		putchar('\n');
	}
	else
	{
		int times = 0;
