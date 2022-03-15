#include <stdio.h>
/**
 * print_alphabet - Prints lowercase alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);
	putchar('\n');
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
