#include "main.h"
#include <stdion.h>
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
		i = 0;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}

	return (i);
}
