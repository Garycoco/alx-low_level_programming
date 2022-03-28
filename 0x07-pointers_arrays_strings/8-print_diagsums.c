#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * of a square matrix of integers
 *
 * Return: void
 *
 * @a: an integer parameter
 * @b: an integer parameter
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2 = 0;

	for (i = 0; i < size; b++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
