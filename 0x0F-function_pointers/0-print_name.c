#include "function_pointers.h"

/**
 * print_name - prints out a name
 *
 * @name: character parameter
 * @f: function to call
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
