#include "main.h"
#include "main.c"
/**
 * _isupper - checks for uppercase characters
 *
 * Return: 1 if c is uppercase
 * 0 is c is lowercase
 *
 * @c: integer parameter
 */

int _isupper(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
