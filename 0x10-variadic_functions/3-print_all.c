#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 *
 */

void print_all(const char * const format, ...)
{
	va_list va;
	int i = 0;
	char *str;

	va_start(va, format);
	
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", (char) ca_arg(va, int));
			break;

			case 'i':
			printf("%d", va_arg(va, int));
			break;

			case 'f':
			printf("%f", (float) va_arg(va, double));
			break;

			case 's':
			str = va_arg(va, char*);
			if(str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", st);
			break;
		}
		if ((format[s] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's' && 
			format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}

