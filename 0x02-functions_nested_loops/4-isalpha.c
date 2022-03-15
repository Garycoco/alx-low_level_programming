#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * Return: 1 if c is a letter, 2 if not
 *
 * @c: The character in ASCII value
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	||
	(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
