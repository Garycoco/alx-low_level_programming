#include "main.h"
/**
 * _islower: Checks if a character is lower 
 * or upper case
 * Return: 1 if lowercase, 2 other
 */
int _islower(int c)
{
	int i = c;

	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}

